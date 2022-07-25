#define BUILD "20180328"
#define INLINE __attribute__((always_inline))
#define PACKAGE_NAME "mozjpeg"
#define VERSION "0"
#ifdef __SIZEOF_SIZE_T__
#define SIZEOF_SIZE_T __SIZEOF_SIZE_T__
#else
#error Cannot determine the size of size_t
#endif
#include <errno.h>

#define THREAD_LOCAL thread_local
#define HAVE_BUILTIN_CTZL
#define FALLTHROUGH __attribute__((fallthrough));
