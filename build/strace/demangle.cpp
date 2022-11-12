#include "demangle.h"
#include <cstring>
#include <cxxabi.h>

extern "C" char *cplus_demangle(const char *mangled, int foo) {
  char *demangled = abi::__cxa_demangle(mangled, nullptr, nullptr, &foo);
  return foo == 0 ? demangled : strdup(mangled);
}
