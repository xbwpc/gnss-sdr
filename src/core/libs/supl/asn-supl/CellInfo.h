/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#ifndef _CellInfo_H
#define _CellInfo_H

#include <asn_application.h>

/* Including external dependencies */
#include "CdmaCellInformation.h"
#include "GsmCellInformation.h"
#include "WcdmaCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum CellInfo_PR
    {
        CellInfo_PR_NOTHING, /* No components present */
        CellInfo_PR_gsmCell,
        CellInfo_PR_wcdmaCell,
        CellInfo_PR_cdmaCell,
        /* Extensions may appear below */
    } CellInfo_PR;

    /* CellInfo */
    typedef struct CellInfo
    {
        CellInfo_PR present;
        union CellInfo_u
        {
            GsmCellInformation_t gsmCell;
            WcdmaCellInformation_t wcdmaCell;
            CdmaCellInformation_t cdmaCell;
            /*
             * This type is extensible,
             * possible extensions are below.
             */
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } CellInfo_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_CellInfo;

#ifdef __cplusplus
}
#endif

#endif /* _CellInfo_H_ */
#include <asn_internal.h>
