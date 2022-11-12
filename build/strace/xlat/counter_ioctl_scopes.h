/* Generated by ./src/xlat/gen.sh from ./src/xlat/counter_ioctl_scopes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_SCOPE_DEVICE) == (0), "COUNTER_SCOPE_DEVICE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_SCOPE_SIGNAL) == (1), "COUNTER_SCOPE_SIGNAL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_SCOPE_COUNT) == (2), "COUNTER_SCOPE_COUNT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat counter_ioctl_scopes in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data counter_ioctl_scopes_xdata[] = {
 [COUNTER_SCOPE_DEVICE] = XLAT(COUNTER_SCOPE_DEVICE),
 #define XLAT_VAL_0 ((unsigned) (COUNTER_SCOPE_DEVICE))
 #define XLAT_STR_0 STRINGIFY(COUNTER_SCOPE_DEVICE)
 [COUNTER_SCOPE_SIGNAL] = XLAT(COUNTER_SCOPE_SIGNAL),
 #define XLAT_VAL_1 ((unsigned) (COUNTER_SCOPE_SIGNAL))
 #define XLAT_STR_1 STRINGIFY(COUNTER_SCOPE_SIGNAL)
 [COUNTER_SCOPE_COUNT] = XLAT(COUNTER_SCOPE_COUNT),
 #define XLAT_VAL_2 ((unsigned) (COUNTER_SCOPE_COUNT))
 #define XLAT_STR_2 STRINGIFY(COUNTER_SCOPE_COUNT)
};
static
const struct xlat counter_ioctl_scopes[1] = { {
 .data = counter_ioctl_scopes_xdata,
 .size = ARRAY_SIZE(counter_ioctl_scopes_xdata),
 .type = XT_INDEXED,
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
