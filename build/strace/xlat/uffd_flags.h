/* Generated by ./src/xlat/gen.sh from ./src/xlat/uffd_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uffd_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data uffd_flags_xdata[] = {
 XLAT(UFFD_USER_MODE_ONLY),
 #define XLAT_VAL_0 ((unsigned) (UFFD_USER_MODE_ONLY))
 #define XLAT_STR_0 STRINGIFY(UFFD_USER_MODE_ONLY)
 XLAT(O_NONBLOCK),
 #define XLAT_VAL_1 ((unsigned) (O_NONBLOCK))
 #define XLAT_STR_1 STRINGIFY(O_NONBLOCK)
 XLAT(O_CLOEXEC),
 #define XLAT_VAL_2 ((unsigned) (O_CLOEXEC))
 #define XLAT_STR_2 STRINGIFY(O_CLOEXEC)
};
static
const struct xlat uffd_flags[1] = { {
 .data = uffd_flags_xdata,
 .size = ARRAY_SIZE(uffd_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */