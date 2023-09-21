/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_LpaeActivationRequest_H_
#define	_LpaeActivationRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LpaeActivationRequest__lpaeOption {
	LpaeActivationRequest__lpaeOption_activateCatBasedLpae	= 0,
	LpaeActivationRequest__lpaeOption_activateScwsBasedLpae	= 1
} e_LpaeActivationRequest__lpaeOption;

/* LpaeActivationRequest */
typedef struct LpaeActivationRequest {
	BIT_STRING_t	 lpaeOption;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LpaeActivationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LpaeActivationRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _LpaeActivationRequest_H_ */
#include "asn_internal.h"