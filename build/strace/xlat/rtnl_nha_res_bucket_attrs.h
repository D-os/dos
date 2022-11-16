/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_nha_res_bucket_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_BUCKET_PAD) == (0), "NHA_RES_BUCKET_PAD != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_BUCKET_INDEX) == (1), "NHA_RES_BUCKET_INDEX != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_BUCKET_IDLE_TIME) == (2), "NHA_RES_BUCKET_IDLE_TIME != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NHA_RES_BUCKET_NH_ID) == (3), "NHA_RES_BUCKET_NH_ID != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_nha_res_bucket_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_nha_res_bucket_attrs_xdata[] = {
 [NHA_RES_BUCKET_PAD] = XLAT(NHA_RES_BUCKET_PAD),
 #define XLAT_VAL_0 ((unsigned) (NHA_RES_BUCKET_PAD))
 #define XLAT_STR_0 STRINGIFY(NHA_RES_BUCKET_PAD)
 [NHA_RES_BUCKET_INDEX] = XLAT(NHA_RES_BUCKET_INDEX),
 #define XLAT_VAL_1 ((unsigned) (NHA_RES_BUCKET_INDEX))
 #define XLAT_STR_1 STRINGIFY(NHA_RES_BUCKET_INDEX)
 [NHA_RES_BUCKET_IDLE_TIME] = XLAT(NHA_RES_BUCKET_IDLE_TIME),
 #define XLAT_VAL_2 ((unsigned) (NHA_RES_BUCKET_IDLE_TIME))
 #define XLAT_STR_2 STRINGIFY(NHA_RES_BUCKET_IDLE_TIME)
 [NHA_RES_BUCKET_NH_ID] = XLAT(NHA_RES_BUCKET_NH_ID),
 #define XLAT_VAL_3 ((unsigned) (NHA_RES_BUCKET_NH_ID))
 #define XLAT_STR_3 STRINGIFY(NHA_RES_BUCKET_NH_ID)
};
static
const struct xlat rtnl_nha_res_bucket_attrs[1] = { {
 .data = rtnl_nha_res_bucket_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_nha_res_bucket_attrs_xdata),
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
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
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
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
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
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */