/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "Myexternal.h"

static asn_TYPE_member_t asn_MBR_encoding_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct encoding, choice.singleASN1type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"singleASN1type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct encoding, choice.octetaligned),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"octetaligned"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct encoding, choice.arbitrary),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"arbitrary"
		},
};
static asn_TYPE_tag2member_t asn_MAP_encoding_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* singleASN1type at 207 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* octetaligned at 208 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* arbitrary at 209 */
};
static asn_CHOICE_specifics_t asn_SPC_encoding_specs_4 = {
	sizeof(struct encoding),
	offsetof(struct encoding, _asn_ctx),
	offsetof(struct encoding, present),
	sizeof(((struct encoding *)0)->present),
	asn_MAP_encoding_tag2el_4,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_encoding_4 = {
	"encoding",
	"encoding",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_encoding_4,
	3,	/* Elements count */
	&asn_SPC_encoding_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Myexternal_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Myexternal, directreference),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"directreference"
		},
	{ ATF_POINTER, 1, offsetof(struct Myexternal, indirectreference),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"indirectreference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Myexternal, encoding),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_encoding_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encoding"
		},
};
static ber_tlv_tag_t asn_DEF_Myexternal_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Myexternal_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* indirectreference at 205 */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* directreference at 204 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* singleASN1type at 207 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* octetaligned at 208 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* arbitrary at 209 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Myexternal_specs_1 = {
	sizeof(struct Myexternal),
	offsetof(struct Myexternal, _asn_ctx),
	asn_MAP_Myexternal_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Myexternal = {
	"Myexternal",
	"Myexternal",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Myexternal_tags_1,
	sizeof(asn_DEF_Myexternal_tags_1)
		/sizeof(asn_DEF_Myexternal_tags_1[0]) - 1, /* 1 */
	asn_DEF_Myexternal_tags_1,	/* Same as above */
	sizeof(asn_DEF_Myexternal_tags_1)
		/sizeof(asn_DEF_Myexternal_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_Myexternal_1,
	3,	/* Elements count */
	&asn_SPC_Myexternal_specs_1	/* Additional specs */
};

