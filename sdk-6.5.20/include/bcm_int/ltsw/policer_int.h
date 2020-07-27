/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_POLICER_INT_H
#define BCMINT_LTSW_POLICER_INT_H

#include <bcm_int/ltsw/generated/policer_ha.h>

/*!
 * \brief Sub component types.
 */
typedef enum bcmint_policer_sub_comp_s {

    /*! State of all ingress meter pools */
    bcmiPolicerSubCompPoolStateIng = 0,

    /*! State of all egress meter pools */
    bcmiPolicerSubCompPoolStateEgr = 1,

    /*! List of ingress policer entries */
    bcmiPolicerSubCompIngEntries = 2,

    /*! List of egress policer entries */
    bcmiPolicerSubCompEgrEntries = 3

} bcmint_policer_sub_comp_t;

#define BCMINT_POLICER_SUB_COMP_STR \
{ \
    "PoolStateIng", \
    "PoolStateEgr", \
    "IngEntries", \
    "EgrEntries" \
}

#endif /* BCMINT_LTSW_POLICER_INT_H */