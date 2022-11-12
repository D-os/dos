/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ifla_bridge_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BRIDGE_MODE_VEB) == (0), "BRIDGE_MODE_VEB != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (BRIDGE_MODE_VEB)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: BRIDGE_MODE_VEB"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (BRIDGE_MODE_VEB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BRIDGE_MODE_VEPA) == (1), "BRIDGE_MODE_VEPA != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (BRIDGE_MODE_VEPA)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: BRIDGE_MODE_VEPA"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (BRIDGE_MODE_VEPA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BRIDGE_MODE_UNDEF) == (0xffff), "BRIDGE_MODE_UNDEF != 0xffff");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (BRIDGE_MODE_UNDEF)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: BRIDGE_MODE_UNDEF"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (BRIDGE_MODE_UNDEF)
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_bridge_modes in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ifla_bridge_modes_xdata[] = {
 XLAT(BRIDGE_MODE_VEB),
 #define XLAT_VAL_0 ((unsigned) (BRIDGE_MODE_VEB))
 #define XLAT_STR_0 STRINGIFY(BRIDGE_MODE_VEB)
 XLAT(BRIDGE_MODE_VEPA),
 #define XLAT_VAL_1 ((unsigned) (BRIDGE_MODE_VEPA))
 #define XLAT_STR_1 STRINGIFY(BRIDGE_MODE_VEPA)
 XLAT(BRIDGE_MODE_UNDEF),
 #define XLAT_VAL_2 ((unsigned) (BRIDGE_MODE_UNDEF))
 #define XLAT_STR_2 STRINGIFY(BRIDGE_MODE_UNDEF)
};
static
const struct xlat rtnl_ifla_bridge_modes[1] = { {
 .data = rtnl_ifla_bridge_modes_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_bridge_modes_xdata),
 .type = XT_SORTED,
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
