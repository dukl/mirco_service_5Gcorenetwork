/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dukl/HistoryCodes/mirco_service_5Gcorenetwork/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_CompletedCellinTAI_H_
#define	_S1ap_CompletedCellinTAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_CompletedCellinTAI_Item;

/* S1ap-CompletedCellinTAI */
typedef struct S1ap_CompletedCellinTAI {
	A_SEQUENCE_OF(struct S1ap_CompletedCellinTAI_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_CompletedCellinTAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_CompletedCellinTAI;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-CompletedCellinTAI-Item.h"

#endif	/* _S1ap_CompletedCellinTAI_H_ */
#include <asn_internal.h>
