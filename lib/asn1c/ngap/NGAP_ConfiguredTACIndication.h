/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_ConfiguredTACIndication_H_
#define	_NGAP_ConfiguredTACIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_ConfiguredTACIndication {
	NGAP_ConfiguredTACIndication_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_ConfiguredTACIndication;

/* NGAP_ConfiguredTACIndication */
typedef long	 NGAP_ConfiguredTACIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_ConfiguredTACIndication;
asn_struct_free_f NGAP_ConfiguredTACIndication_free;
asn_struct_print_f NGAP_ConfiguredTACIndication_print;
asn_constr_check_f NGAP_ConfiguredTACIndication_constraint;
per_type_decoder_f NGAP_ConfiguredTACIndication_decode_aper;
per_type_encoder_f NGAP_ConfiguredTACIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_ConfiguredTACIndication_H_ */
#include <asn_internal.h>
