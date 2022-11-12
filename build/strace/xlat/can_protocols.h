/* Generated by ./src/xlat/gen.sh from ./src/xlat/can_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CAN_RAW) || (defined(HAVE_DECL_CAN_RAW) && HAVE_DECL_CAN_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_RAW) == (1), "CAN_RAW != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_RAW 1
#endif
#if defined(CAN_BCM) || (defined(HAVE_DECL_CAN_BCM) && HAVE_DECL_CAN_BCM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_BCM) == (2), "CAN_BCM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_BCM 2
#endif
#if defined(CAN_TP16) || (defined(HAVE_DECL_CAN_TP16) && HAVE_DECL_CAN_TP16)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_TP16) == (3), "CAN_TP16 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_TP16 3
#endif
#if defined(CAN_TP20) || (defined(HAVE_DECL_CAN_TP20) && HAVE_DECL_CAN_TP20)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_TP20) == (4), "CAN_TP20 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_TP20 4
#endif
#if defined(CAN_MCNET) || (defined(HAVE_DECL_CAN_MCNET) && HAVE_DECL_CAN_MCNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_MCNET) == (5), "CAN_MCNET != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_MCNET 5
#endif
#if defined(CAN_ISOTP) || (defined(HAVE_DECL_CAN_ISOTP) && HAVE_DECL_CAN_ISOTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_ISOTP) == (6), "CAN_ISOTP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_ISOTP 6
#endif
#if defined(CAN_J1939) || (defined(HAVE_DECL_CAN_J1939) && HAVE_DECL_CAN_J1939)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAN_J1939) == (7), "CAN_J1939 != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAN_J1939 7
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat can_protocols in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data can_protocols_xdata[] = {
 [CAN_RAW] = XLAT(CAN_RAW),
 #define XLAT_VAL_0 ((unsigned) (CAN_RAW))
 #define XLAT_STR_0 STRINGIFY(CAN_RAW)
 [CAN_BCM] = XLAT(CAN_BCM),
 #define XLAT_VAL_1 ((unsigned) (CAN_BCM))
 #define XLAT_STR_1 STRINGIFY(CAN_BCM)
 [CAN_TP16] = XLAT(CAN_TP16),
 #define XLAT_VAL_2 ((unsigned) (CAN_TP16))
 #define XLAT_STR_2 STRINGIFY(CAN_TP16)
 [CAN_TP20] = XLAT(CAN_TP20),
 #define XLAT_VAL_3 ((unsigned) (CAN_TP20))
 #define XLAT_STR_3 STRINGIFY(CAN_TP20)
 [CAN_MCNET] = XLAT(CAN_MCNET),
 #define XLAT_VAL_4 ((unsigned) (CAN_MCNET))
 #define XLAT_STR_4 STRINGIFY(CAN_MCNET)
 [CAN_ISOTP] = XLAT(CAN_ISOTP),
 #define XLAT_VAL_5 ((unsigned) (CAN_ISOTP))
 #define XLAT_STR_5 STRINGIFY(CAN_ISOTP)
 [CAN_J1939] = XLAT(CAN_J1939),
 #define XLAT_VAL_6 ((unsigned) (CAN_J1939))
 #define XLAT_STR_6 STRINGIFY(CAN_J1939)
};
static
const struct xlat can_protocols[1] = { {
 .data = can_protocols_xdata,
 .size = ARRAY_SIZE(can_protocols_xdata),
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
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
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
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
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
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
