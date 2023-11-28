/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_LanePositionWithLateralDetails_H_
#define	_LanePositionWithLateralDetails_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LanePosition.h"
#include "LaneType.h"
#include "Direction.h"
#include "StandardLength9b.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LanePositionWithLateralDetails */
typedef struct LanePositionWithLateralDetails {
	LanePosition_t	 transversalPosition;
	LaneType_t	 laneType;	/* DEFAULT 0 */
	Direction_t	 direction;	/* DEFAULT 0 */
	StandardLength9b_t	 distanceToLeftBorder;
	StandardLength9b_t	 distanceToRightBorder;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LanePositionWithLateralDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LanePositionWithLateralDetails;
extern asn_SEQUENCE_specifics_t asn_SPC_LanePositionWithLateralDetails_specs_1;
extern asn_TYPE_member_t asn_MBR_LanePositionWithLateralDetails_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LanePositionWithLateralDetails_H_ */
#include "asn_internal.h"