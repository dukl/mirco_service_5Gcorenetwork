/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/oai/mirco_service_5Gcorenetwork/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_Cdma2000HOStatus_H_
#define	_S1ap_Cdma2000HOStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Cdma2000HOStatus {
	S1ap_Cdma2000HOStatus_hOSuccess	= 0,
	S1ap_Cdma2000HOStatus_hOFailure	= 1
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_Cdma2000HOStatus;

/* S1ap-Cdma2000HOStatus */
typedef long	 S1ap_Cdma2000HOStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Cdma2000HOStatus;
asn_struct_free_f S1ap_Cdma2000HOStatus_free;
asn_struct_print_f S1ap_Cdma2000HOStatus_print;
asn_constr_check_f S1ap_Cdma2000HOStatus_constraint;
ber_type_decoder_f S1ap_Cdma2000HOStatus_decode_ber;
der_type_encoder_f S1ap_Cdma2000HOStatus_encode_der;
xer_type_decoder_f S1ap_Cdma2000HOStatus_decode_xer;
xer_type_encoder_f S1ap_Cdma2000HOStatus_encode_xer;
per_type_decoder_f S1ap_Cdma2000HOStatus_decode_uper;
per_type_encoder_f S1ap_Cdma2000HOStatus_encode_uper;
per_type_decoder_f S1ap_Cdma2000HOStatus_decode_aper;
per_type_encoder_f S1ap_Cdma2000HOStatus_encode_aper;
type_compare_f     S1ap_Cdma2000HOStatus_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Cdma2000HOStatus_H_ */
#include <asn_internal.h>
