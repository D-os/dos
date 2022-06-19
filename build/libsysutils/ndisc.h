#ifndef _NDISC_H
#define _NDISC_H

#include <stdint.h>

/*
 *	ndisc options
 */

enum {
	__ND_OPT_PREFIX_INFO_END = 0,
	ND_OPT_SOURCE_LL_ADDR = 1,	/* RFC2461 */
	ND_OPT_TARGET_LL_ADDR = 2,	/* RFC2461 */
	ND_OPT_PREFIX_INFO = 3,		/* RFC2461 */
	ND_OPT_REDIRECT_HDR = 4,	/* RFC2461 */
	ND_OPT_MTU = 5,			/* RFC2461 */
	ND_OPT_NONCE = 14,              /* RFC7527 */
	__ND_OPT_ARRAY_MAX,
	ND_OPT_ROUTE_INFO = 24,		/* RFC4191 */
	ND_OPT_RDNSS = 25,		/* RFC5006 */
	ND_OPT_DNSSL = 31,		/* RFC6106 */
	ND_OPT_6CO = 34,		/* RFC6775 */
	ND_OPT_CAPTIVE_PORTAL = 37,	/* RFC7710 */
	ND_OPT_PREF64 = 38,		/* RFC8781 */
	__ND_OPT_MAX
};

struct nd_opt_rdnss {		/* RDNSS option RFC 6106 */
	uint8_t	nd_opt_rdnss_type;
	uint8_t	nd_opt_rdnss_len;
	uint16_t	nd_opt_rdnss_reserved;
	uint32_t	nd_opt_rdnss_lifetime;
	/* followed by list of IP prefixes */
} __packed;


#endif
