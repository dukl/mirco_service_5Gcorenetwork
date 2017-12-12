/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_RRC_Establishment_Cause_H_
#define	_S1ap_RRC_Establishment_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_RRC_Establishment_Cause {
	S1ap_RRC_Establishment_Cause_emergency	= 0,
	S1ap_RRC_Establishment_Cause_highPriorityAccess	= 1,
	S1ap_RRC_Establishment_Cause_mt_Access	= 2,
	S1ap_RRC_Establishment_Cause_mo_Signalling	= 3,
	S1ap_RRC_Establishment_Cause_mo_Data	= 4,
	/*
	 * Enumeration is extensible
	 */
	S1ap_RRC_Establishment_Cause_delay_TolerantAccess	= 5
} e_S1ap_RRC_Establishment_Cause;

/* S1ap-RRC-Establishment-Cause */
typedef long	 S1ap_RRC_Establishment_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_RRC_Establishment_Cause;
asn_struct_free_f S1ap_RRC_Establishment_Cause_free;
asn_struct_print_f S1ap_RRC_Establishment_Cause_print;
asn_constr_check_f S1ap_RRC_Establishment_Cause_constraint;
ber_type_decoder_f S1ap_RRC_Establishment_Cause_decode_ber;
der_type_encoder_f S1ap_RRC_Establishment_Cause_encode_der;
xer_type_decoder_f S1ap_RRC_Establishment_Cause_decode_xer;
xer_type_encoder_f S1ap_RRC_Establishment_Cause_encode_xer;
per_type_decoder_f S1ap_RRC_Establishment_Cause_decode_uper;
per_type_encoder_f S1ap_RRC_Establishment_Cause_encode_uper;
per_type_decoder_f S1ap_RRC_Establishment_Cause_decode_aper;
per_type_encoder_f S1ap_RRC_Establishment_Cause_encode_aper;
type_compare_f     S1ap_RRC_Establishment_Cause_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_RRC_Establishment_Cause_H_ */
#include <asn_internal.h>
