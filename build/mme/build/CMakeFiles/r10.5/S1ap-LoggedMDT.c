/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dukl/mirco_service_5Gcorenetwork/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-LoggedMDT.h"

static asn_TYPE_member_t asn_MBR_S1ap_LoggedMDT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LoggedMDT, loggingInterval),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_LoggingInterval,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LoggedMDT, loggingDuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_LoggingDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_LoggedMDT, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_LoggedMDT_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_S1ap_LoggedMDT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_LoggedMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggingInterval at 811 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggingDuration at 812 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 814 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_LoggedMDT_specs_1 = {
	sizeof(struct S1ap_LoggedMDT),
	offsetof(struct S1ap_LoggedMDT, _asn_ctx),
	asn_MAP_S1ap_LoggedMDT_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_LoggedMDT_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_LoggedMDT = {
	"S1ap-LoggedMDT",
	"S1ap-LoggedMDT",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_LoggedMDT_tags_1,
	sizeof(asn_DEF_S1ap_LoggedMDT_tags_1)
		/sizeof(asn_DEF_S1ap_LoggedMDT_tags_1[0]), /* 1 */
	asn_DEF_S1ap_LoggedMDT_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_LoggedMDT_tags_1)
		/sizeof(asn_DEF_S1ap_LoggedMDT_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_LoggedMDT_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_LoggedMDT_specs_1	/* Additional specs */
};

