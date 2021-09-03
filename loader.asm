
				device 		zxspectrum48
				org			7000h

FILE_HEADER = 23773

ERR_SP = 23613
VARS = 23627

CHAN_OPEN = 5633
PRINT = 8252

TRDOS_ENTRY = 15635	; 0x3D13

BootLoader:     xor			a
				ld			(ERR_SP), a					; protect from BREAK
				di
                ld          hl, (VARS)                  ; copy loader code to the proper location in memory
                ld          de, BootLoaderCode - BootLoader
                add         hl, de
                ld          de, BootLoaderCode
                ld          bc, BootLoaderCodeEnd - BootLoaderCode
                ldir
                jp          BootLoaderCode

BootLoaderCode: ld          sp, BootLoaderCode
				ei

                ld          c, 0x18         ; load system sector
                call        TRDOS_ENTRY

            	ld          c, 0x13         ; set file name
				ld			hl, FileName
                call        TRDOS_ENTRY

                ld          c, 0x0a         ; locate file
                ld          a, 9
                ld          (0x5d06), a     ; number of bytes to compare
                call        TRDOS_ENTRY

                ld          a, c            ; A <= file number
                inc         c               ; 0xff means error
                jr        	z, Error

                ld          c, 0x08         ; read file information
                call        TRDOS_ENTRY

                xor         a
                ld          (0x5cf9), a     ; read/verify mode (00=read)

                ld          c, 0x0e         ; load file
                call        TRDOS_ENTRY
                or          1
                jr			z, Error

                ld			hl, (FILE_HEADER + 9)
                jp			(hl)

Error:        	ld          a, 2
                call        CHAN_OPEN                   ; open channel #2
                ld          de, ErrorMsg
                ld          bc, ErrorMsgEnd - ErrorMsg
                call        PRINT
Halt:         	di
                halt
                jr          Halt

ErrorMsg:    	db          "INVALID DISK OR READ ERROR!"
ErrorMsgEnd:

FileName:		db			"binary  C"

BootLoaderCodeEnd:
