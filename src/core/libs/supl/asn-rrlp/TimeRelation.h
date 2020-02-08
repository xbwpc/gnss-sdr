/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _TimeRelation_H
#define _TimeRelation_H

#include <asn_application.h>

/* Including external dependencies */
#include "GPSTOW23b.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GSMTime;

    /* TimeRelation */
    typedef struct TimeRelation
    {
        GPSTOW23b_t gpsTOW;
        struct GSMTime *gsmTime /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } TimeRelation_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_TimeRelation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSMTime.h"

#endif /* _TimeRelation_H_ */
#include <asn_internal.h>
