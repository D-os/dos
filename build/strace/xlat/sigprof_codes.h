/* Generated by ./src/xlat/gen.sh from ./src/xlat/sigprof_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigprof_codes[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sigprof_codes_xdata[] = {
#if defined(PROF_SIG) || (defined(HAVE_DECL_PROF_SIG) && HAVE_DECL_PROF_SIG)
  XLAT(PROF_SIG),
 #define XLAT_VAL_0 ((unsigned) (PROF_SIG))
 #define XLAT_STR_0 STRINGIFY(PROF_SIG)
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigprof_codes[1] = { {
 .data = sigprof_codes_xdata,
 .size = ARRAY_SIZE(sigprof_codes_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
