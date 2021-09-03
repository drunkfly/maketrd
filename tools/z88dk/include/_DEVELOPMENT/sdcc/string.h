
// automatically generated by m4 from headers in proto subdir


#ifndef __STRING_H__
#define __STRING_H__

#include <stddef.h>

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

extern int bcmp(const void *b1,const void *b2,size_t len);
extern int bcmp_callee(const void *b1,const void *b2,size_t len) __z88dk_callee;
#define bcmp(a,b,c) bcmp_callee(a,b,c)


extern void bcopy(const void *src,void *dst,size_t len);
extern void bcopy_callee(const void *src,void *dst,size_t len) __z88dk_callee;
#define bcopy(a,b,c) bcopy_callee(a,b,c)


extern void bzero(void *mem,size_t n);
extern void bzero_callee(void *mem,size_t n) __z88dk_callee;
#define bzero(a,b) bzero_callee(a,b)


extern char *index(const char *s,int c) __preserves_regs(d,e);
extern char *index_callee(const char *s,int c) __preserves_regs(d,e) __z88dk_callee;
#define index(a,b) index_callee(a,b)


extern char *rindex(const char *s,int c) __preserves_regs(d);
extern char *rindex_callee(const char *s,int c) __preserves_regs(d) __z88dk_callee;
#define rindex(a,b) rindex_callee(a,b)


extern char *strset(char *s,int c) __preserves_regs(b,c);
extern char *strset_callee(char *s,int c) __preserves_regs(b,c) __z88dk_callee;
#define strset(a,b) strset_callee(a,b)


extern char *strnset(char *s,int c,size_t n);
extern char *strnset_callee(char *s,int c,size_t n) __z88dk_callee;
#define strnset(a,b,c) strnset_callee(a,b,c)


extern void *rawmemchr(const void *mem,int c) __preserves_regs(d,e);
extern void *rawmemchr_callee(const void *mem,int c) __preserves_regs(d,e) __z88dk_callee;
#define rawmemchr(a,b) rawmemchr_callee(a,b)



extern char *_memlwr_(void *p,size_t n) __preserves_regs(d,e);
extern char *_memlwr__callee(void *p,size_t n) __preserves_regs(d,e) __z88dk_callee;
#define _memlwr_(a,b) _memlwr__callee(a,b)


extern char *_memstrcpy_(void *p,const char *s,size_t n);
extern char *_memstrcpy__callee(void *p,const char *s,size_t n) __z88dk_callee;
#define _memstrcpy_(a,b,c) _memstrcpy__callee(a,b,c)


extern char *_memupr_(void *p,size_t n) __preserves_regs(d,e);
extern char *_memupr__callee(void *p,size_t n) __preserves_regs(d,e) __z88dk_callee;
#define _memupr_(a,b) _memupr__callee(a,b)


extern char *_strrstrip_(char *s);
extern char *_strrstrip__fastcall(char *s) __z88dk_fastcall;
#define _strrstrip_(a) _strrstrip__fastcall(a)


extern int ffs(int i) __preserves_regs(b,c,d,e);
extern int ffs_fastcall(int i) __preserves_regs(b,c,d,e) __z88dk_fastcall;
#define ffs(a) ffs_fastcall(a)


extern int ffsl(long i) __preserves_regs(b,c);
extern int ffsl_fastcall(long i) __preserves_regs(b,c,d,e) __z88dk_fastcall;
#define ffsl(a) ffsl_fastcall(a)


extern void *memccpy(void *dst,const void *src,int c,size_t n);
extern void *memccpy_callee(void *dst,const void *src,int c,size_t n) __z88dk_callee;
#define memccpy(a,b,c,d) memccpy_callee(a,b,c,d)


extern void *memchr(const void *s,int c,size_t n);
extern void *memchr_callee(const void *s,int c,size_t n) __z88dk_callee;
#define memchr(a,b,c) memchr_callee(a,b,c)


extern int memcmp(const void *s1,const void *s2,size_t n);
extern int memcmp_callee(const void *s1,const void *s2,size_t n) __z88dk_callee;
#define memcmp(a,b,c) memcmp_callee(a,b,c)


extern void *memcpy(void *dst,const void *src,size_t n);
extern void *memcpy_callee(void *dst,const void *src,size_t n) __z88dk_callee;
#define memcpy(a,b,c) memcpy_callee(a,b,c)


extern void *memmem(const void *haystack,size_t haystack_len,const void *needle,size_t needle_len);
extern void *memmem_callee(const void *haystack,size_t haystack_len,const void *needle,size_t needle_len) __z88dk_callee;
#define memmem(a,b,c,d) memmem_callee(a,b,c,d)


extern void *memmove(void *dst,const void *src,size_t n);
extern void *memmove_callee(void *dst,const void *src,size_t n) __z88dk_callee;
#define memmove(a,b,c) memmove_callee(a,b,c)


extern void *memrchr(const void *s,int c,size_t n);
extern void *memrchr_callee(const void *s,int c,size_t n) __z88dk_callee;
#define memrchr(a,b,c) memrchr_callee(a,b,c)


extern void *memset(void *s,int c,size_t n);
extern void *memset_callee(void *s,int c,size_t n) __z88dk_callee;
#define memset(a,b,c) memset_callee(a,b,c)


extern void *memswap(void *s1,void *s2,size_t n);
extern void *memswap_callee(void *s1,void *s2,size_t n) __z88dk_callee;
#define memswap(a,b,c) memswap_callee(a,b,c)


extern char *stpcpy(char *dst,const char *src);
extern char *stpcpy_callee(char *dst,const char *src) __z88dk_callee;
#define stpcpy(a,b) stpcpy_callee(a,b)


extern char *stpncpy(char *dst,const char *src,size_t n);
extern char *stpncpy_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define stpncpy(a,b,c) stpncpy_callee(a,b,c)


extern int strcasecmp(const char *s1,const char *s2) __preserves_regs(b);
extern int strcasecmp_callee(const char *s1,const char *s2) __preserves_regs(b) __z88dk_callee;
#define strcasecmp(a,b) strcasecmp_callee(a,b)


extern char *strcat(char *dst,const char *src);
extern char *strcat_callee(char *dst,const char *src) __z88dk_callee;
#define strcat(a,b) strcat_callee(a,b)


extern char *strchr(const char *s,int c) __preserves_regs(d,e);
extern char *strchr_callee(const char *s,int c) __preserves_regs(d,e) __z88dk_callee;
#define strchr(a,b) strchr_callee(a,b)


extern char *strchrnul(const char *s,int c) __preserves_regs(d,e);
extern char *strchrnul_callee(const char *s,int c) __preserves_regs(d,e) __z88dk_callee;
#define strchrnul(a,b) strchrnul_callee(a,b)


extern int strcmp(const char *s1,const char *s2);
extern int strcmp_callee(const char *s1,const char *s2) __z88dk_callee;
#define strcmp(a,b) strcmp_callee(a,b)


extern int strcoll(const char *s1,const char *s2);
extern int strcoll_callee(const char *s1,const char *s2) __z88dk_callee;
#define strcoll(a,b) strcoll_callee(a,b)


extern char *strcpy(char *dst,const char *src);
extern char *strcpy_callee(char *dst,const char *src) __z88dk_callee;
#define strcpy(a,b) strcpy_callee(a,b)


extern size_t strcspn(const char *s,const char *nspn);
extern size_t strcspn_callee(const char *s,const char *nspn) __z88dk_callee;
#define strcspn(a,b) strcspn_callee(a,b)


extern char *strdup(const char *s);
extern char *strdup_fastcall(const char *s) __z88dk_fastcall;
#define strdup(a) strdup_fastcall(a)


extern char *strerror(int errnum) __preserves_regs(d);
extern char *strerror_fastcall(int errnum) __preserves_regs(d) __z88dk_fastcall;
#define strerror(a) strerror_fastcall(a)


extern int stricmp(const char *s1,const char *s2) __preserves_regs(b);
extern int stricmp_callee(const char *s1,const char *s2) __preserves_regs(b) __z88dk_callee;
#define stricmp(a,b) stricmp_callee(a,b)


extern size_t strlcat(char *dst,const char *src,size_t n);
extern size_t strlcat_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define strlcat(a,b,c) strlcat_callee(a,b,c)


extern size_t strlcpy(char *dst,const char *src,size_t n);
extern size_t strlcpy_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define strlcpy(a,b,c) strlcpy_callee(a,b,c)


extern size_t strlen(const char *s) __preserves_regs(d,e);
extern size_t strlen_fastcall(const char *s) __preserves_regs(d,e) __z88dk_fastcall;
#define strlen(a) strlen_fastcall(a)


extern char *strlwr(char *s) __preserves_regs(b,c,d,e);
extern char *strlwr_fastcall(char *s) __preserves_regs(b,c,d,e,h,l) __z88dk_fastcall;
#define strlwr(a) strlwr_fastcall(a)


extern int strncasecmp(const char *s1,const char *s2,size_t n);
extern int strncasecmp_callee(const char *s1,const char *s2,size_t n) __z88dk_callee;
#define strncasecmp(a,b,c) strncasecmp_callee(a,b,c)


extern char *strncat(char *dst,const char *src,size_t n);
extern char *strncat_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define strncat(a,b,c) strncat_callee(a,b,c)


extern char *strnchr(const char *s,size_t n,int c);
extern char *strnchr_callee(const char *s,size_t n,int c) __z88dk_callee;
#define strnchr(a,b,c) strnchr_callee(a,b,c)


extern int strncmp(const char *s1,const char *s2,size_t n);
extern int strncmp_callee(const char *s1,const char *s2,size_t n) __z88dk_callee;
#define strncmp(a,b,c) strncmp_callee(a,b,c)


extern char *strncpy(char *dst,const char *src,size_t n);
extern char *strncpy_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define strncpy(a,b,c) strncpy_callee(a,b,c)


extern char *strndup(const char *s,size_t n);
extern char *strndup_callee(const char *s,size_t n) __z88dk_callee;
#define strndup(a,b) strndup_callee(a,b)


extern int strnicmp(const char *s1,const char *s2,size_t n);
extern int strnicmp_callee(const char *s1,const char *s2,size_t n) __z88dk_callee;
#define strnicmp(a,b,c) strnicmp_callee(a,b,c)


extern size_t strnlen(const char *s,size_t max_len);
extern size_t strnlen_callee(const char *s,size_t max_len) __z88dk_callee;
#define strnlen(a,b) strnlen_callee(a,b)


extern char *strpbrk(const char *s,const char *set) __preserves_regs(b);
extern char *strpbrk_callee(const char *s,const char *set) __preserves_regs(b) __z88dk_callee;
#define strpbrk(a,b) strpbrk_callee(a,b)


extern char *strrchr(const char *s,int c) __preserves_regs(d);
extern char *strrchr_callee(const char *s,int c) __preserves_regs(d) __z88dk_callee;
#define strrchr(a,b) strrchr_callee(a,b)


extern size_t strrcspn(const char *s,const char *set);
extern size_t strrcspn_callee(const char *s,const char *set) __z88dk_callee;
#define strrcspn(a,b) strrcspn_callee(a,b)


extern char *strrev(char *s);
extern char *strrev_fastcall(char *s) __preserves_regs(h,l) __z88dk_fastcall;
#define strrev(a) strrev_fastcall(a)


extern size_t strrspn(const char *s,const char *set);
extern size_t strrspn_callee(const char *s,const char *set) __z88dk_callee;
#define strrspn(a,b) strrspn_callee(a,b)


extern char *strrstr(const char *s,const char *subs);
extern char *strrstr_callee(const char *s,const char *subs) __z88dk_callee;
#define strrstr(a,b) strrstr_callee(a,b)


extern char *strrstrip(char *s);
extern char *strrstrip_fastcall(char *s) __preserves_regs(h,l) __z88dk_fastcall;
#define strrstrip(a) strrstrip_fastcall(a)


extern char *strsep(char **s,const char *delim);
extern char *strsep_callee(char **s,const char *delim) __z88dk_callee;
#define strsep(a,b) strsep_callee(a,b)


extern size_t strspn(const char *s,const char *pfx);
extern size_t strspn_callee(const char *s,const char *pfx) __z88dk_callee;
#define strspn(a,b) strspn_callee(a,b)


extern char *strstr(const char *s,const char *subs) __preserves_regs(b,c);
extern char *strstr_callee(const char *s,const char *subs) __preserves_regs(b,c) __z88dk_callee;
#define strstr(a,b) strstr_callee(a,b)


extern char *strstrip(char *s) __preserves_regs(b,c,d,e);
extern char *strstrip_fastcall(char *s) __preserves_regs(b,c,d,e) __z88dk_fastcall;
#define strstrip(a) strstrip_fastcall(a)


extern char *strtok(char *s,const char *delim);
extern char *strtok_callee(char *s,const char *delim) __z88dk_callee;
#define strtok(a,b) strtok_callee(a,b)


extern char *strtok_r(char *s,const char *delim,char **last_s);
extern char *strtok_r_callee(char *s,const char *delim,char **last_s) __z88dk_callee;
#define strtok_r(a,b,c) strtok_r_callee(a,b,c)


extern char *strupr(char *s) __preserves_regs(b,c,d,e);
extern char *strupr_fastcall(char *s) __preserves_regs(b,c,d,e,h,l) __z88dk_fastcall;
#define strupr(a) strupr_fastcall(a)


extern size_t strxfrm(char *dst,const char *src,size_t n);
extern size_t strxfrm_callee(char *dst,const char *src,size_t n) __z88dk_callee;
#define strxfrm(a,b,c) strxfrm_callee(a,b,c)



#ifdef __CLANG

   extern int ffsll(long long i);
   
#endif

#ifdef __SCCZ80

   #ifndef __DISABLE_BUILTIN

   #ifndef __DISABLE_BUILTIN_MEMSET
   #undef  memset
   #define memset(a,b,c)   __builtin_memset(a,b,c)
   extern void __LIB__    *__builtin_memset(void *dst, int c, size_t n) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_MEMCPY
   #undef  memcpy
   #define memcpy(a,b,c)   __builtin_memcpy(a,b,c)
   extern void __LIB__    *__builtin_memcpy(void *dst, void *src,size_t n) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCPY
   #undef  strcpy
   #define strcpy(a,b)     __builtin_strcpy(a,b)
   extern char __LIB__    *__builtin_strcpy(char *dst, const char *src) __smallc;
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCHR
   #undef  strchr
   #define strchr(a,b)     __builtin_strchr(a,b)
   extern char __LIB__    *__builtin_strchr(const char *haystack, int needle) __smallc;
   #endif

   #endif

#endif

#ifdef __SDCC

   extern int ffsll(long long i) __preserves_regs(b,c);
   extern int ffsll_callee(long long i) __preserves_regs(b,c) __z88dk_callee;
   #define ffsll(a) ffsll_callee(a)

   #ifndef __DISABLE_BUILTIN

   #ifndef __DISABLE_BUILTIN_MEMCPY
   #undef  memcpy
   #define memcpy(dst, src, n)    __builtin_memcpy(dst, src, n)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCPY
   #undef  strcpy
   #define strcpy(dst, src)       __builtin_strcpy(dst, src)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRNCPY
   #undef  strncpy
   #define strncpy(dst, src, n)   __builtin_strncpy(dst, src, n)
   #endif
   
   #ifndef __DISABLE_BUILTIN_STRCHR
   #undef  strchr
   #define strchr(s, c)           __builtin_strchr(s, c)
   #endif
   
   #ifndef __DISABLE_BUILTIN_MEMSET
   #undef  memset
   #define memset(dst, c, n)      __builtin_memset(dst, c, n)
   #endif

   #endif

#endif

#endif