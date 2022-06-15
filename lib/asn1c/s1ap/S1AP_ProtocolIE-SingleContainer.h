/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_ProtocolIE_SingleContainer_H_
#define	_S1AP_ProtocolIE_SingleContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProtocolIE-Field.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ProtocolIE-SingleContainer */
typedef S1AP_E_RABToBeSetupItemBearerSUReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P0_t;
typedef S1AP_E_RABSetupItemBearerSUResIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P1_t;
typedef S1AP_E_RABToBeModifiedItemBearerModReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P2_t;
typedef S1AP_E_RABModifyItemBearerModResIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P3_t;
typedef S1AP_E_RABReleaseItemBearerRelCompIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P4_t;
typedef S1AP_E_RABToBeSetupItemCtxtSUReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P5_t;
typedef S1AP_E_RABSetupItemCtxtSUResIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P6_t;
typedef S1AP_TAIItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P7_t;
typedef S1AP_UE_associatedLogicalS1_ConnectionItemRes_t	 S1AP_ProtocolIE_SingleContainer_7850P8_t;
typedef S1AP_UE_associatedLogicalS1_ConnectionItemResAck_t	 S1AP_ProtocolIE_SingleContainer_7850P9_t;
typedef S1AP_E_RABModifyItemBearerModConfIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P10_t;
typedef S1AP_Bearers_SubjectToStatusTransfer_ItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P11_t;
typedef S1AP_Bearers_SubjectToEarlyStatusTransfer_ItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P12_t;
typedef S1AP_DAPSResponseInfoListIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P13_t;
typedef S1AP_E_RABInformationListIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P14_t;
typedef S1AP_E_RABItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P15_t;
typedef S1AP_E_RABUsageReportItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P16_t;
typedef S1AP_MDTMode_ExtensionIE_t	 S1AP_ProtocolIE_SingleContainer_7850P17_t;
typedef S1AP_RecommendedCellItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P18_t;
typedef S1AP_RecommendedENBItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P19_t;
typedef S1AP_SecondaryRATDataUsageReportItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P20_t;
typedef S1AP_SONInformation_ExtensionIE_t	 S1AP_ProtocolIE_SingleContainer_7850P21_t;
typedef S1AP_SourceNodeID_ExtensionIE_t	 S1AP_ProtocolIE_SingleContainer_7850P22_t;
typedef S1AP_E_RABDataForwardingItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P23_t;
typedef S1AP_E_RABToBeSetupItemHOReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P24_t;
typedef S1AP_E_RABAdmittedItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P25_t;
typedef S1AP_E_RABFailedtoSetupItemHOReqAckIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P26_t;
typedef S1AP_E_RABToBeSwitchedDLItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P27_t;
typedef S1AP_E_RABToBeSwitchedULItemIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P28_t;
typedef S1AP_E_RABToBeModifiedItemBearerModIndIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P29_t;
typedef S1AP_E_RABNotToBeModifiedItemBearerModIndIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P30_t;
typedef S1AP_E_RABFailedToResumeItemResumeReqIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P31_t;
typedef S1AP_E_RABFailedToResumeItemResumeResIEs_t	 S1AP_ProtocolIE_SingleContainer_7850P32_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P0;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P0_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P0_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P0_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P0_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P0_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P1;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P1_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P1_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P1_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P1_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P1_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P2;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P2_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P2_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P2_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P2_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P2_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P3;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P3_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P3_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P3_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P3_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P3_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P4;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P4_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P4_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P4_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P4_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P4_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P5;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P5_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P5_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P5_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P5_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P5_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P6;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P6_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P6_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P6_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P6_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P6_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P7;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P7_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P7_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P7_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P7_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P7_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P8;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P8_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P8_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P8_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P8_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P8_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P9;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P9_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P9_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P9_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P9_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P9_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P10;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P10_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P10_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P10_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P10_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P10_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P11;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P11_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P11_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P11_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P11_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P11_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P12;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P12_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P12_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P12_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P12_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P12_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P13;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P13_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P13_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P13_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P13_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P13_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P14;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P14_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P14_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P14_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P14_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P14_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P15;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P15_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P15_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P15_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P15_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P15_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P16;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P16_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P16_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P16_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P16_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P16_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P17;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P17_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P17_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P17_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P17_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P17_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P18;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P18_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P18_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P18_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P18_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P18_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P19;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P19_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P19_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P19_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P19_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P19_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P20;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P20_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P20_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P20_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P20_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P20_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P21;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P21_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P21_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P21_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P21_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P21_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P22;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P22_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P22_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P22_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P22_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P22_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P23;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P23_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P23_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P23_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P23_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P23_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P24;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P24_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P24_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P24_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P24_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P24_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P25;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P25_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P25_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P25_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P25_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P25_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P26;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P26_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P26_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P26_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P26_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P26_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P27;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P27_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P27_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P27_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P27_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P27_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P28;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P28_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P28_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P28_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P28_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P28_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P29;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P29_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P29_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P29_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P29_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P29_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P30;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P30_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P30_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P30_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P30_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P30_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P31;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P31_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P31_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P31_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P31_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P31_encode_aper;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_SingleContainer_7850P32;
asn_struct_free_f S1AP_ProtocolIE_SingleContainer_7850P32_free;
asn_struct_print_f S1AP_ProtocolIE_SingleContainer_7850P32_print;
asn_constr_check_f S1AP_ProtocolIE_SingleContainer_7850P32_constraint;
per_type_decoder_f S1AP_ProtocolIE_SingleContainer_7850P32_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_SingleContainer_7850P32_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ProtocolIE_SingleContainer_H_ */
#include <asn_internal.h>