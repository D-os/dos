#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>

#include <pthread.h>

extern "C" {
static void _thread_init(void) { __system_properties_init(); }
__attribute__((section(".init_array"))) void (*p_thread_init)(void) =
    &_thread_init;
}
