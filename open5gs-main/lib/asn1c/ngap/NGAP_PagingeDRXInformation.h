/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PagingeDRXInformation_H_
#define	_NGAP_PagingeDRXInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_Paging-eDRX-Cycle.h"
#include "NGAP_Paging-Time-Window.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PagingeDRXInformation */
typedef struct NGAP_PagingeDRXInformation {
	NGAP_Paging_eDRX_Cycle_t	 paging_eDRX_Cycle;
	NGAP_Paging_Time_Window_t	*paging_Time_Window;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PagingeDRXInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PagingeDRXInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PagingeDRXInformation_H_ */
#include <asn_internal.h>
