/* Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_ipv4_conf.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NET_IPV4_CONF_FORWARDING) || (defined(HAVE_DECL_NET_IPV4_CONF_FORWARDING) && HAVE_DECL_NET_IPV4_CONF_FORWARDING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_FORWARDING) == (1), "NET_IPV4_CONF_FORWARDING != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_FORWARDING 1
#endif
#if defined(NET_IPV4_CONF_MC_FORWARDING) || (defined(HAVE_DECL_NET_IPV4_CONF_MC_FORWARDING) && HAVE_DECL_NET_IPV4_CONF_MC_FORWARDING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_MC_FORWARDING) == (2), "NET_IPV4_CONF_MC_FORWARDING != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_MC_FORWARDING 2
#endif
#if defined(NET_IPV4_CONF_PROXY_ARP) || (defined(HAVE_DECL_NET_IPV4_CONF_PROXY_ARP) && HAVE_DECL_NET_IPV4_CONF_PROXY_ARP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_PROXY_ARP) == (3), "NET_IPV4_CONF_PROXY_ARP != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_PROXY_ARP 3
#endif
#if defined(NET_IPV4_CONF_ACCEPT_REDIRECTS) || (defined(HAVE_DECL_NET_IPV4_CONF_ACCEPT_REDIRECTS) && HAVE_DECL_NET_IPV4_CONF_ACCEPT_REDIRECTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ACCEPT_REDIRECTS) == (4), "NET_IPV4_CONF_ACCEPT_REDIRECTS != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ACCEPT_REDIRECTS 4
#endif
#if defined(NET_IPV4_CONF_SECURE_REDIRECTS) || (defined(HAVE_DECL_NET_IPV4_CONF_SECURE_REDIRECTS) && HAVE_DECL_NET_IPV4_CONF_SECURE_REDIRECTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_SECURE_REDIRECTS) == (5), "NET_IPV4_CONF_SECURE_REDIRECTS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_SECURE_REDIRECTS 5
#endif
#if defined(NET_IPV4_CONF_SEND_REDIRECTS) || (defined(HAVE_DECL_NET_IPV4_CONF_SEND_REDIRECTS) && HAVE_DECL_NET_IPV4_CONF_SEND_REDIRECTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_SEND_REDIRECTS) == (6), "NET_IPV4_CONF_SEND_REDIRECTS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_SEND_REDIRECTS 6
#endif
#if defined(NET_IPV4_CONF_SHARED_MEDIA) || (defined(HAVE_DECL_NET_IPV4_CONF_SHARED_MEDIA) && HAVE_DECL_NET_IPV4_CONF_SHARED_MEDIA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_SHARED_MEDIA) == (7), "NET_IPV4_CONF_SHARED_MEDIA != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_SHARED_MEDIA 7
#endif
#if defined(NET_IPV4_CONF_RP_FILTER) || (defined(HAVE_DECL_NET_IPV4_CONF_RP_FILTER) && HAVE_DECL_NET_IPV4_CONF_RP_FILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_RP_FILTER) == (8), "NET_IPV4_CONF_RP_FILTER != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_RP_FILTER 8
#endif
#if defined(NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE) || (defined(HAVE_DECL_NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE) && HAVE_DECL_NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE) == (9), "NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE 9
#endif
#if defined(NET_IPV4_CONF_BOOTP_RELAY) || (defined(HAVE_DECL_NET_IPV4_CONF_BOOTP_RELAY) && HAVE_DECL_NET_IPV4_CONF_BOOTP_RELAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_BOOTP_RELAY) == (10), "NET_IPV4_CONF_BOOTP_RELAY != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_BOOTP_RELAY 10
#endif
#if defined(NET_IPV4_CONF_LOG_MARTIANS) || (defined(HAVE_DECL_NET_IPV4_CONF_LOG_MARTIANS) && HAVE_DECL_NET_IPV4_CONF_LOG_MARTIANS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_LOG_MARTIANS) == (11), "NET_IPV4_CONF_LOG_MARTIANS != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_LOG_MARTIANS 11
#endif
#if defined(NET_IPV4_CONF_TAG) || (defined(HAVE_DECL_NET_IPV4_CONF_TAG) && HAVE_DECL_NET_IPV4_CONF_TAG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_TAG) == (12), "NET_IPV4_CONF_TAG != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_TAG 12
#endif
#if defined(NET_IPV4_CONF_ARPFILTER) || (defined(HAVE_DECL_NET_IPV4_CONF_ARPFILTER) && HAVE_DECL_NET_IPV4_CONF_ARPFILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARPFILTER) == (13), "NET_IPV4_CONF_ARPFILTER != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARPFILTER 13
#endif
#if defined(NET_IPV4_CONF_MEDIUM_ID) || (defined(HAVE_DECL_NET_IPV4_CONF_MEDIUM_ID) && HAVE_DECL_NET_IPV4_CONF_MEDIUM_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_MEDIUM_ID) == (14), "NET_IPV4_CONF_MEDIUM_ID != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_MEDIUM_ID 14
#endif
#if defined(NET_IPV4_CONF_NOXFRM) || (defined(HAVE_DECL_NET_IPV4_CONF_NOXFRM) && HAVE_DECL_NET_IPV4_CONF_NOXFRM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_NOXFRM) == (15), "NET_IPV4_CONF_NOXFRM != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_NOXFRM 15
#endif
#if defined(NET_IPV4_CONF_NOPOLICY) || (defined(HAVE_DECL_NET_IPV4_CONF_NOPOLICY) && HAVE_DECL_NET_IPV4_CONF_NOPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_NOPOLICY) == (16), "NET_IPV4_CONF_NOPOLICY != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_NOPOLICY 16
#endif
#if defined(NET_IPV4_CONF_FORCE_IGMP_VERSION) || (defined(HAVE_DECL_NET_IPV4_CONF_FORCE_IGMP_VERSION) && HAVE_DECL_NET_IPV4_CONF_FORCE_IGMP_VERSION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_FORCE_IGMP_VERSION) == (17), "NET_IPV4_CONF_FORCE_IGMP_VERSION != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_FORCE_IGMP_VERSION 17
#endif
#if defined(NET_IPV4_CONF_ARP_ANNOUNCE) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_ANNOUNCE) && HAVE_DECL_NET_IPV4_CONF_ARP_ANNOUNCE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARP_ANNOUNCE) == (18), "NET_IPV4_CONF_ARP_ANNOUNCE != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARP_ANNOUNCE 18
#endif
#if defined(NET_IPV4_CONF_ARP_IGNORE) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_IGNORE) && HAVE_DECL_NET_IPV4_CONF_ARP_IGNORE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARP_IGNORE) == (19), "NET_IPV4_CONF_ARP_IGNORE != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARP_IGNORE 19
#endif
#if defined(NET_IPV4_CONF_PROMOTE_SECONDARIES) || (defined(HAVE_DECL_NET_IPV4_CONF_PROMOTE_SECONDARIES) && HAVE_DECL_NET_IPV4_CONF_PROMOTE_SECONDARIES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_PROMOTE_SECONDARIES) == (20), "NET_IPV4_CONF_PROMOTE_SECONDARIES != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_PROMOTE_SECONDARIES 20
#endif
#if defined(NET_IPV4_CONF_ARP_ACCEPT) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_ACCEPT) && HAVE_DECL_NET_IPV4_CONF_ARP_ACCEPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARP_ACCEPT) == (21), "NET_IPV4_CONF_ARP_ACCEPT != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARP_ACCEPT 21
#endif
#if defined(NET_IPV4_CONF_ARP_NOTIFY) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_NOTIFY) && HAVE_DECL_NET_IPV4_CONF_ARP_NOTIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARP_NOTIFY) == (22), "NET_IPV4_CONF_ARP_NOTIFY != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARP_NOTIFY 22
#endif
#if defined(NET_IPV4_CONF_ARP_EVICT_NOCARRIER) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_EVICT_NOCARRIER) && HAVE_DECL_NET_IPV4_CONF_ARP_EVICT_NOCARRIER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NET_IPV4_CONF_ARP_EVICT_NOCARRIER) == (23), "NET_IPV4_CONF_ARP_EVICT_NOCARRIER != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NET_IPV4_CONF_ARP_EVICT_NOCARRIER 23
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_ipv4_conf in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sysctl_net_ipv4_conf_xdata[] = {

 [NET_IPV4_CONF_FORWARDING] = XLAT(NET_IPV4_CONF_FORWARDING),
 #define XLAT_VAL_0 ((unsigned) (NET_IPV4_CONF_FORWARDING))
 #define XLAT_STR_0 STRINGIFY(NET_IPV4_CONF_FORWARDING)
 [NET_IPV4_CONF_MC_FORWARDING] = XLAT(NET_IPV4_CONF_MC_FORWARDING),
 #define XLAT_VAL_1 ((unsigned) (NET_IPV4_CONF_MC_FORWARDING))
 #define XLAT_STR_1 STRINGIFY(NET_IPV4_CONF_MC_FORWARDING)
 [NET_IPV4_CONF_PROXY_ARP] = XLAT(NET_IPV4_CONF_PROXY_ARP),
 #define XLAT_VAL_2 ((unsigned) (NET_IPV4_CONF_PROXY_ARP))
 #define XLAT_STR_2 STRINGIFY(NET_IPV4_CONF_PROXY_ARP)
 [NET_IPV4_CONF_ACCEPT_REDIRECTS] = XLAT(NET_IPV4_CONF_ACCEPT_REDIRECTS),
 #define XLAT_VAL_3 ((unsigned) (NET_IPV4_CONF_ACCEPT_REDIRECTS))
 #define XLAT_STR_3 STRINGIFY(NET_IPV4_CONF_ACCEPT_REDIRECTS)
 [NET_IPV4_CONF_SECURE_REDIRECTS] = XLAT(NET_IPV4_CONF_SECURE_REDIRECTS),
 #define XLAT_VAL_4 ((unsigned) (NET_IPV4_CONF_SECURE_REDIRECTS))
 #define XLAT_STR_4 STRINGIFY(NET_IPV4_CONF_SECURE_REDIRECTS)
 [NET_IPV4_CONF_SEND_REDIRECTS] = XLAT(NET_IPV4_CONF_SEND_REDIRECTS),
 #define XLAT_VAL_5 ((unsigned) (NET_IPV4_CONF_SEND_REDIRECTS))
 #define XLAT_STR_5 STRINGIFY(NET_IPV4_CONF_SEND_REDIRECTS)
 [NET_IPV4_CONF_SHARED_MEDIA] = XLAT(NET_IPV4_CONF_SHARED_MEDIA),
 #define XLAT_VAL_6 ((unsigned) (NET_IPV4_CONF_SHARED_MEDIA))
 #define XLAT_STR_6 STRINGIFY(NET_IPV4_CONF_SHARED_MEDIA)
 [NET_IPV4_CONF_RP_FILTER] = XLAT(NET_IPV4_CONF_RP_FILTER),
 #define XLAT_VAL_7 ((unsigned) (NET_IPV4_CONF_RP_FILTER))
 #define XLAT_STR_7 STRINGIFY(NET_IPV4_CONF_RP_FILTER)
 [NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE] = XLAT(NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE),
 #define XLAT_VAL_8 ((unsigned) (NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE))
 #define XLAT_STR_8 STRINGIFY(NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE)
 [NET_IPV4_CONF_BOOTP_RELAY] = XLAT(NET_IPV4_CONF_BOOTP_RELAY),
 #define XLAT_VAL_9 ((unsigned) (NET_IPV4_CONF_BOOTP_RELAY))
 #define XLAT_STR_9 STRINGIFY(NET_IPV4_CONF_BOOTP_RELAY)
 [NET_IPV4_CONF_LOG_MARTIANS] = XLAT(NET_IPV4_CONF_LOG_MARTIANS),
 #define XLAT_VAL_10 ((unsigned) (NET_IPV4_CONF_LOG_MARTIANS))
 #define XLAT_STR_10 STRINGIFY(NET_IPV4_CONF_LOG_MARTIANS)

 [NET_IPV4_CONF_TAG] = XLAT(NET_IPV4_CONF_TAG),
 #define XLAT_VAL_11 ((unsigned) (NET_IPV4_CONF_TAG))
 #define XLAT_STR_11 STRINGIFY(NET_IPV4_CONF_TAG)

 [NET_IPV4_CONF_ARPFILTER] = XLAT(NET_IPV4_CONF_ARPFILTER),
 #define XLAT_VAL_12 ((unsigned) (NET_IPV4_CONF_ARPFILTER))
 #define XLAT_STR_12 STRINGIFY(NET_IPV4_CONF_ARPFILTER)

 [NET_IPV4_CONF_MEDIUM_ID] = XLAT(NET_IPV4_CONF_MEDIUM_ID),
 #define XLAT_VAL_13 ((unsigned) (NET_IPV4_CONF_MEDIUM_ID))
 #define XLAT_STR_13 STRINGIFY(NET_IPV4_CONF_MEDIUM_ID)

 [NET_IPV4_CONF_NOXFRM] = XLAT(NET_IPV4_CONF_NOXFRM),
 #define XLAT_VAL_14 ((unsigned) (NET_IPV4_CONF_NOXFRM))
 #define XLAT_STR_14 STRINGIFY(NET_IPV4_CONF_NOXFRM)
 [NET_IPV4_CONF_NOPOLICY] = XLAT(NET_IPV4_CONF_NOPOLICY),
 #define XLAT_VAL_15 ((unsigned) (NET_IPV4_CONF_NOPOLICY))
 #define XLAT_STR_15 STRINGIFY(NET_IPV4_CONF_NOPOLICY)

 [NET_IPV4_CONF_FORCE_IGMP_VERSION] = XLAT(NET_IPV4_CONF_FORCE_IGMP_VERSION),
 #define XLAT_VAL_16 ((unsigned) (NET_IPV4_CONF_FORCE_IGMP_VERSION))
 #define XLAT_STR_16 STRINGIFY(NET_IPV4_CONF_FORCE_IGMP_VERSION)

 [NET_IPV4_CONF_ARP_ANNOUNCE] = XLAT(NET_IPV4_CONF_ARP_ANNOUNCE),
 #define XLAT_VAL_17 ((unsigned) (NET_IPV4_CONF_ARP_ANNOUNCE))
 #define XLAT_STR_17 STRINGIFY(NET_IPV4_CONF_ARP_ANNOUNCE)

 [NET_IPV4_CONF_ARP_IGNORE] = XLAT(NET_IPV4_CONF_ARP_IGNORE),
 #define XLAT_VAL_18 ((unsigned) (NET_IPV4_CONF_ARP_IGNORE))
 #define XLAT_STR_18 STRINGIFY(NET_IPV4_CONF_ARP_IGNORE)

 [NET_IPV4_CONF_PROMOTE_SECONDARIES] = XLAT(NET_IPV4_CONF_PROMOTE_SECONDARIES),
 #define XLAT_VAL_19 ((unsigned) (NET_IPV4_CONF_PROMOTE_SECONDARIES))
 #define XLAT_STR_19 STRINGIFY(NET_IPV4_CONF_PROMOTE_SECONDARIES)

 [NET_IPV4_CONF_ARP_ACCEPT] = XLAT(NET_IPV4_CONF_ARP_ACCEPT),
 #define XLAT_VAL_20 ((unsigned) (NET_IPV4_CONF_ARP_ACCEPT))
 #define XLAT_STR_20 STRINGIFY(NET_IPV4_CONF_ARP_ACCEPT)

 [NET_IPV4_CONF_ARP_NOTIFY] = XLAT(NET_IPV4_CONF_ARP_NOTIFY),
 #define XLAT_VAL_21 ((unsigned) (NET_IPV4_CONF_ARP_NOTIFY))
 #define XLAT_STR_21 STRINGIFY(NET_IPV4_CONF_ARP_NOTIFY)







 [NET_IPV4_CONF_ARP_EVICT_NOCARRIER] = XLAT(NET_IPV4_CONF_ARP_EVICT_NOCARRIER),
 #define XLAT_VAL_22 ((unsigned) (NET_IPV4_CONF_ARP_EVICT_NOCARRIER))
 #define XLAT_STR_22 STRINGIFY(NET_IPV4_CONF_ARP_EVICT_NOCARRIER)
};
static
const struct xlat sysctl_net_ipv4_conf[1] = { {
 .data = sysctl_net_ipv4_conf_xdata,
 .size = ARRAY_SIZE(sysctl_net_ipv4_conf_xdata),
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
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
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
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
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
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
