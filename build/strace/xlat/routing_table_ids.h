/* Generated by ./src/xlat/gen.sh from ./src/xlat/routing_table_ids.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data routing_table_ids_xdata[] = {
 XLAT(RT_TABLE_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (RT_TABLE_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(RT_TABLE_UNSPEC)
 XLAT(RT_TABLE_COMPAT),
 #define XLAT_VAL_1 ((unsigned) (RT_TABLE_COMPAT))
 #define XLAT_STR_1 STRINGIFY(RT_TABLE_COMPAT)
 XLAT(RT_TABLE_DEFAULT),
 #define XLAT_VAL_2 ((unsigned) (RT_TABLE_DEFAULT))
 #define XLAT_STR_2 STRINGIFY(RT_TABLE_DEFAULT)
 XLAT(RT_TABLE_MAIN),
 #define XLAT_VAL_3 ((unsigned) (RT_TABLE_MAIN))
 #define XLAT_STR_3 STRINGIFY(RT_TABLE_MAIN)
 XLAT(RT_TABLE_LOCAL),
 #define XLAT_VAL_4 ((unsigned) (RT_TABLE_LOCAL))
 #define XLAT_STR_4 STRINGIFY(RT_TABLE_LOCAL)
};
const struct xlat routing_table_ids[1] = { {
 .data = routing_table_ids_xdata,
 .size = ARRAY_SIZE(routing_table_ids_xdata),
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
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
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
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
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
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
