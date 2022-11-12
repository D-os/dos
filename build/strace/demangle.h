#define DMGL_AUTO 0
#define DMGL_PARAMS 0

#ifdef __cplusplus
extern "C" {
#endif

extern char *cplus_demangle(const char *mangled, int options);

#ifdef __cplusplus
} /* extern "C" */
#endif
