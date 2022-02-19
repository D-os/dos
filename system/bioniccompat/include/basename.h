/* stand-in for glibc basename() implementation in string.h */
#if !defined(__GLIBC__)
#define basename(src) (strrchr(src,'/') ? strrchr(src,'/')+1 : src)
#endif
