/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_GetBoundProfilePackageResponse_H_
#define	_GetBoundProfilePackageResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GetBoundProfilePackageOk.h"
#include "INTEGER.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetBoundProfilePackageResponse_PR {
	GetBoundProfilePackageResponse_PR_NOTHING,	/* No components present */
	GetBoundProfilePackageResponse_PR_getBoundProfilePackageOk,
	GetBoundProfilePackageResponse_PR_getBoundProfilePackageError
	/* Extensions may appear below */
	
} GetBoundProfilePackageResponse_PR;
typedef enum GetBoundProfilePackageResponse__getBoundProfilePackageError {
	GetBoundProfilePackageResponse__getBoundProfilePackageError_euiccSignatureInvalid	= 1,
	GetBoundProfilePackageResponse__getBoundProfilePackageError_confirmationCodeMissing	= 2,
	GetBoundProfilePackageResponse__getBoundProfilePackageError_confirmationCodeRefused	= 3,
	GetBoundProfilePackageResponse__getBoundProfilePackageError_confirmationCodeRetriesExceeded	= 4,
	GetBoundProfilePackageResponse__getBoundProfilePackageError_invalidTransactionId	= 95,
	GetBoundProfilePackageResponse__getBoundProfilePackageError_undefinedError	= 127
} e_GetBoundProfilePackageResponse__getBoundProfilePackageError;

/* GetBoundProfilePackageResponse */
typedef struct GetBoundProfilePackageResponse {
	GetBoundProfilePackageResponse_PR present;
	union GetBoundProfilePackageResponse_u {
		GetBoundProfilePackageOk_t	 getBoundProfilePackageOk;
		INTEGER_t	 getBoundProfilePackageError;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetBoundProfilePackageResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetBoundProfilePackageResponse;
extern asn_CHOICE_specifics_t asn_SPC_GetBoundProfilePackageResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_GetBoundProfilePackageResponse_1[2];
extern asn_per_constraints_t asn_PER_type_GetBoundProfilePackageResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GetBoundProfilePackageResponse_H_ */
#include "asn_internal.h"