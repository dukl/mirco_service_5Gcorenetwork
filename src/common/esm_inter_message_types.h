



typedef enum esm_imsg_primitive_s {
	ESM_IMSG_START = 0,
	ESM_IMSG_TEST,
	ESM_IMSG_PDN_PLUS,
	ESM_IMSG_PDN_SUB,
	ESM_IMSG_EPEIR,
	ESM_IMSG_SET_T3489_ID,
	ESM_IMSG_NTS_ENST,
	ESM_IMSG_IS_NAP_MORETHAN_ONE,
	ESM_IMSG_IS_NAE_MORETHAN_BPE,
	ESM_IMSG_NAE_PLUS,
	ESM_IMSG_TRUE_EMERGENCY,
	ESM_IMSG_NIPCR,
	ESM_IMSG_CALLOC_PROC_DATA,
	ESM_IMSG_MASA,
	ESM_IMSG_SET_PROC_DATA,
	ESM_IMSG_EPPCR,
	ESM_IMSG_EPDEBC,
	ESM_IMSG_NIPCNTR,
	ESM_IMSG_END
}esm_imsg_primitive_t;

#define GUTI_DATA_IND(mSGpTR) (mSGpTR)->ittiMsg.esm_inter_message
typedef struct esm_inter_message_s {
	esm_imsg_primitive_t primitive;
	bool * runOver;
	guti_t guti;
    const_bstring  apn;
    const protocol_configuration_options_t * pco;
	esm_ebr_timer_data_t * data;
	mme_ue_s1ap_id_t ue_id;
	bool * isTrue;
	proc_tid_t pti;
	imsi_t * imsi;
	struct esm_proc_data_s ** esm_data;
	struct ue_mm_context_t * ue_mm_context;
	struct apn_configuration_s ** apn_config;
	struct apn_configuration_s * apn_config_calling;
	pdn_cid_t pdn_cid;
	esm_cause_t * esm_cause;
	int * rc;
	struct emm_context_s * emm_ctx;
	ebi_t * new_ebi;
}esm_inter_message_t;
