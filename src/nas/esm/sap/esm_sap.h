/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under 
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.  
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*****************************************************************************
Source      esm_sap.h

Version     0.1

Date        2012/11/22

Product     NAS stack

Subsystem   EPS Session Management

Author      Frederic Maurel

Description Defines the ESM Service Access Points at which the EPS
        Session Management sublayer provides procedures for the
        EPS bearer context handling and resources allocation.

*****************************************************************************/
#ifndef __ESM_SAP_H__
#define __ESM_SAP_H__

#include "esm_sapDef.h"

/****************************************************************************/
/*********************  G L O B A L    C O N S T A N T S  *******************/
/****************************************************************************/

/****************************************************************************/
/************************  G L O B A L    T Y P E S  ************************/
/****************************************************************************/

/****************************************************************************/
/********************  G L O B A L    V A R I A B L E S  ********************/
/****************************************************************************/

/****************************************************************************/
/******************  E X P O R T E D    F U N C T I O N S  ******************/
/****************************************************************************/

void esm_sap_initialize(void);

//int esm_sap_send(esm_sap_t *msg);
void *  esm_sap_message_process(__attribute__((unused)) void *args);
void *  guti_msg_process(__attribute__((unused)) void *args);
void *  esm_tmp_message_process(__attribute__((unused)) void *args);
#endif /* __ESM_SAP_H__*/
