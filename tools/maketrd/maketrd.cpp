#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <vector>
#include <string>

#define SECTOR_SIZE 256
#define SECTORS_PER_TRACK 16
#define TRACK_COUNT 80
#define DIRECTORY_LENGTH (8 * SECTOR_SIZE)
#define BASIC_EXTRA_BYTES 4

class FileHandle
{
public:
	FileHandle()
		: m_handle(nullptr)
	{
	}

	~FileHandle()
	{
		close();
	}

	bool open(const char* name, const char* mode)
	{
		m_handle = fopen(name, mode);
		if (!m_handle) {
			fprintf(stderr, "Can't open %s: %s\n", name, strerror(errno));
			return false;
		}
		return true;
	}

	void close()
	{
		if (m_handle) {
			fclose(m_handle);
			m_handle = nullptr;
		}
	}

	operator FILE*() const { return m_handle; }

private:
	FILE* m_handle;

	FileHandle(const FileHandle&) = delete;
	FileHandle& operator=(const FileHandle&) = delete;
};

struct File
{
	std::string name;
	std::string ext;
	std::vector<uint8_t> data;
	int number;
	int startSector;
	int startTrack;
};

static std::vector<File> files;
static std::vector<uint8_t> output;

int main()
{
	FileHandle f;
	if (!f.open("trd.txt", "r"))
		return 1;

	#define MAX_LINE_WIDTH 256
	char buf[MAX_LINE_WIDTH];
	char file[MAX_LINE_WIDTH];

	while (fgets(buf, sizeof(buf), f)) {
		int number = 0;
		sscanf(buf, "%s %d", file, &number);

		FileHandle ff;
		if (!ff.open(file, "rb"))
			return 1;

		fseek(ff, 0, SEEK_END);
		long size = ftell(ff);
		fseek(ff, 0, SEEK_SET);
		if (ferror(ff)) {
			fprintf(stderr, "Can't determine size of file %s: %s\n", file, strerror(errno));
			return 1;
		}

		std::vector<uint8_t> data(size);
		size_t bytesRead = fread(&data[0], 1, size, ff);
		if (ferror(ff) || bytesRead != size) {
			fprintf(stderr, "Can't read %s: %s\n", file, strerror(errno));
			return 1;
		}

		ff.close();

		char* p = strrchr(file, '.');
		int idx = (p ? p - file : strlen(file));

		std::string name(file, idx);
		std::string ext(&file[idx + 1]);

		File filerec;
		filerec.name = std::move(name);
		filerec.ext = std::move(ext);
		filerec.data = std::move(data);
		filerec.number = number;
		files.emplace_back(std::move(filerec));
	}

	f.close();

	// write directory

	int startSector = SECTORS_PER_TRACK;

	for (const auto& it : files) {
		// write file name
		size_t len = std::min(size_t(8), it.name.size());
		for (size_t i = 0; i < len; i++)
			output.emplace_back(it.name[i]);
		for (; len < 8; ++len)
			output.emplace_back(' ');

		// write extension
		char t;
		if (it.ext.size() > 0)
			t = toupper(it.ext[0]);
		else
			t = ' ';
		output.emplace_back(t);

		size_t fullFileLength = it.data.size();
		if (t == 'B')
			fullFileLength += BASIC_EXTRA_BYTES;

		// start address for CODE, full file length for BASIC
		if (t == 'C') {
			output.emplace_back(it.number & 0xff);
			output.emplace_back((it.number >> 8) & 0xff);
		} else {
			output.emplace_back(uint8_t(fullFileLength & 0xff));
			output.emplace_back(uint8_t((fullFileLength >> 8) & 0xff));
		}

		// length for CODE, file length for BASIC
		if (t == 'C') {
			output.emplace_back(uint8_t(fullFileLength & 0xff));
			output.emplace_back(uint8_t((fullFileLength >> 8) & 0xff));
		} else {
			output.emplace_back(uint8_t(fullFileLength & 0xff));
			output.emplace_back(uint8_t(fullFileLength >> 8) & 0xff);
		}

		// number of sectors
		uint8_t sectorsPerFile = (fullFileLength + SECTOR_SIZE - 1) / SECTOR_SIZE;
		output.emplace_back(sectorsPerFile);

		// sector number
		output.emplace_back(startSector % SECTORS_PER_TRACK);
		// track number
		output.emplace_back(startSector / SECTORS_PER_TRACK);

		startSector += sectorsPerFile;
	}

	output.resize(DIRECTORY_LENGTH + 225, 0);

	// first free sector number
	output.emplace_back(startSector % SECTORS_PER_TRACK);
	// first free track number
	output.emplace_back(startSector / SECTORS_PER_TRACK);
	// disk type  80 track / 2 side
	output.emplace_back(0x16);
	// file count
	output.emplace_back(uint8_t(files.size()));
	// free sectors count
	size_t freeSectors = SECTORS_PER_TRACK * TRACK_COUNT * 2 - startSector;
	output.emplace_back(uint8_t(freeSectors & 0xff));
	output.emplace_back(uint8_t((freeSectors >> 8) & 0xff));
	// sectors per track
	output.emplace_back(SECTORS_PER_TRACK);
	// reserved
	output.emplace_back(0);
	output.emplace_back(0);
	for (size_t i = 0; i < 9; i++)
		output.emplace_back(' ');
	output.emplace_back(0);
	// number of deleted files
	output.emplace_back(0);
	// disk volume
	output.emplace_back('T');
	output.emplace_back('R');
	output.emplace_back('-');
	output.emplace_back('D');
	output.emplace_back('O');
	output.emplace_back('S');
	output.emplace_back(' ');
	output.emplace_back(' ');
	// reserved
	output.emplace_back(0);
	output.emplace_back(0);
	output.emplace_back(0);

	output.resize(SECTORS_PER_TRACK * SECTOR_SIZE);

	for (const auto& it : files) {
		output.insert(output.end(), it.data.begin(), it.data.end());

		if (it.ext.length() > 0 && toupper(it.ext[0]) == 'B') {
			output.emplace_back(0x80);
			output.emplace_back(0xAA);
			output.emplace_back(uint8_t(it.number & 0xff));
			output.emplace_back(uint8_t((it.number >> 8) & 0xff));
		}

		output.resize((output.size() + SECTOR_SIZE - 1) / SECTOR_SIZE * SECTOR_SIZE);
	}

	output.resize(SECTORS_PER_TRACK * TRACK_COUNT * 2 * SECTOR_SIZE);

	FileHandle out;
	if (!out.open("output.trd", "wb"))
		return 1;

	size_t bytesWritten = fwrite(&output[0], 1, output.size(), out);
	if (ferror(out) || bytesWritten != output.size()) {
		fprintf(stderr, "Can't write output file: %s", strerror(errno));
		return 1;
	}

	return 0;
}
