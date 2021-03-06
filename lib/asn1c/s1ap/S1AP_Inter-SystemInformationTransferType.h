/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_Inter_SystemInformationTransferType_H_
#define	_S1AP_Inter_SystemInformationTransferType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_Inter_SystemInformationTransferType_PR {
	S1AP_Inter_SystemInformationTransferType_PR_NOTHING,	/* No components present */
	S1AP_Inter_SystemInformationTransferType_PR_rIMTransfer
	/* Extensions may appear below */
	
} S1AP_Inter_SystemInformationTransferType_PR;

/* Forward declarations */
struct S1AP_RIMTransfer;

/* S1AP_Inter-SystemInformationTransferType */
typedef struct S1AP_Inter_SystemInformationTransferType {
	S1AP_Inter_SystemInformationTransferType_PR present;
	union S1AP_Inter_SystemInformationTransferType_u {
		struct S1AP_RIMTransfer	*rIMTransfer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_Inter_SystemInformationTransferType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Inter_SystemInformationTransferType;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Inter_SystemInformationTransferType_H_ */
#include <asn_internal.h>
