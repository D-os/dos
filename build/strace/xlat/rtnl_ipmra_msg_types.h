/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_ipmra_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IGMPMSG_NOCACHE) == (1), "IGMPMSG_NOCACHE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IGMPMSG_WRONGVIF) == (2), "IGMPMSG_WRONGVIF != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IGMPMSG_WHOLEPKT) == (3), "IGMPMSG_WHOLEPKT != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IGMPMSG_WRVIFWHOLE) == (4), "IGMPMSG_WRVIFWHOLE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ipmra_msg_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_ipmra_msg_types_xdata[] = {
 [IGMPMSG_NOCACHE] = XLAT(IGMPMSG_NOCACHE),
 #define XLAT_VAL_0 ((unsigned) (IGMPMSG_NOCACHE))
 #define XLAT_STR_0 STRINGIFY(IGMPMSG_NOCACHE)
 [IGMPMSG_WRONGVIF] = XLAT(IGMPMSG_WRONGVIF),
 #define XLAT_VAL_1 ((unsigned) (IGMPMSG_WRONGVIF))
 #define XLAT_STR_1 STRINGIFY(IGMPMSG_WRONGVIF)
 [IGMPMSG_WHOLEPKT] = XLAT(IGMPMSG_WHOLEPKT),
 #define XLAT_VAL_2 ((unsigned) (IGMPMSG_WHOLEPKT))
 #define XLAT_STR_2 STRINGIFY(IGMPMSG_WHOLEPKT)
 [IGMPMSG_WRVIFWHOLE] = XLAT(IGMPMSG_WRVIFWHOLE),
 #define XLAT_VAL_3 ((unsigned) (IGMPMSG_WRVIFWHOLE))
 #define XLAT_STR_3 STRINGIFY(IGMPMSG_WRVIFWHOLE)
};
static
const struct xlat rtnl_ipmra_msg_types[1] = { {
 .data = rtnl_ipmra_msg_types_xdata,
 .size = ARRAY_SIZE(rtnl_ipmra_msg_types_xdata),
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