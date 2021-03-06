/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasObjectToRemoveList_H_
#define	_MeasObjectToRemoveList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasObjectToRemoveList */
typedef struct MeasObjectToRemoveList {
	A_SEQUENCE_OF(MeasObjectId_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToRemoveList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToRemoveList;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToRemoveList_H_ */
#include <asn_internal.h>
