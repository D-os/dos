/* Generated by ./src/xlat/gen.sh from ./src/xlat/nl_netfilter_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data nl_netfilter_msg_types_xdata[] = {
 XLAT(NFNL_MSG_BATCH_BEGIN),
 #define XLAT_VAL_0 ((unsigned) (NFNL_MSG_BATCH_BEGIN))
 #define XLAT_STR_0 STRINGIFY(NFNL_MSG_BATCH_BEGIN)
 XLAT(NFNL_MSG_BATCH_END),
 #define XLAT_VAL_1 ((unsigned) (NFNL_MSG_BATCH_END))
 #define XLAT_STR_1 STRINGIFY(NFNL_MSG_BATCH_END)
};
const struct xlat nl_netfilter_msg_types[1] = { {
 .data = nl_netfilter_msg_types_xdata,
 .size = ARRAY_SIZE(nl_netfilter_msg_types_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
