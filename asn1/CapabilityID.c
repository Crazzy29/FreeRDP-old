/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "CapabilityID.h"

static int
memb_standardID_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_standardID_constr_2 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CapabilityID_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CapabilityID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CapabilityID, choice.standardID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_standardID_constraint_1,
		&asn_PER_memb_standardID_constr_2,
		0,
		"standardID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CapabilityID, choice.nonstandardID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Key,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonstandardID"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CapabilityID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* standardID at 576 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonstandardID at 578 */
};
static asn_CHOICE_specifics_t asn_SPC_CapabilityID_specs_1 = {
	sizeof(struct CapabilityID),
	offsetof(struct CapabilityID, _asn_ctx),
	offsetof(struct CapabilityID, present),
	sizeof(((struct CapabilityID *)0)->present),
	asn_MAP_CapabilityID_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CapabilityID = {
	"CapabilityID",
	"CapabilityID",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_CapabilityID_constr_1,
	asn_MBR_CapabilityID_1,
	2,	/* Elements count */
	&asn_SPC_CapabilityID_specs_1	/* Additional specs */
};
