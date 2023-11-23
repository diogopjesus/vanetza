/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_PositionConfidenceEllipse_H_
#define	_PositionConfidenceEllipse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SemiAxisLength.h"
#include "Wgs84AngleValue.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PositionConfidenceEllipse */
typedef struct PositionConfidenceEllipse {
	SemiAxisLength_t	 semiMajorAxisLength;
	SemiAxisLength_t	 semiMinorAxisLength;
	Wgs84AngleValue_t	 semiMajorAxisOrientation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionConfidenceEllipse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionConfidenceEllipse;
extern asn_SEQUENCE_specifics_t asn_SPC_PositionConfidenceEllipse_specs_1;
extern asn_TYPE_member_t asn_MBR_PositionConfidenceEllipse_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PositionConfidenceEllipse_H_ */
#include "asn_internal.h"
