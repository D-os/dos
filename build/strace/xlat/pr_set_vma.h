/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_set_vma.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_set_vma in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pr_set_vma_xdata[] = {
 [PR_SET_VMA_ANON_NAME] = XLAT(PR_SET_VMA_ANON_NAME),
 #define XLAT_VAL_0 ((unsigned) (PR_SET_VMA_ANON_NAME))
 #define XLAT_STR_0 STRINGIFY(PR_SET_VMA_ANON_NAME)
};
static
const struct xlat pr_set_vma[1] = { {
 .data = pr_set_vma_xdata,
 .size = ARRAY_SIZE(pr_set_vma_xdata),
 .type = XT_INDEXED,
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
