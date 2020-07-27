/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * $Copyright:.$
 *
 *************************************************************************/

#include <bcmissu/issu_types.h>
#include "bcmsec_ha.h"

static const issu_field_t bcmissu_fields_bcmsec_pport_info_t[] = {
    {
        .fid = 0xf90a1a37,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmsec_pport_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmsec_pport_info_t var;

    switch (field_id) {
        case 0xf90a1a37:
            return ((uint8_t *)&var.port_p2l_mapping) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmsec_ha_bcmsec_pport_info_t_v1_4 = {
    .offset_get_func = bcmsec_pport_info_t_field_offset_get,
    .generic_size = sizeof(bcmsec_pport_info_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmsec_pport_info_t,
};

static const issu_field_t bcmissu_fields_bcmsec_lport_info_t[] = {
    {
        .fid = 0x52af95c9,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x051bcaaa,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x8897b96b,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmsec_lport_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmsec_lport_info_t var;

    switch (field_id) {
        case 0x52af95c9:
            return ((uint8_t *)&var.port_speed_cur) - (uint8_t *)&var;
        case 0x051bcaaa:
            return ((uint8_t *)&var.port_num_lanes) - (uint8_t *)&var;
        case 0x8897b96b:
            return ((uint8_t *)&var.port_l2p_mapping) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmsec_ha_bcmsec_lport_info_t_v1_4 = {
    .offset_get_func = bcmsec_lport_info_t_field_offset_get,
    .generic_size = sizeof(bcmsec_lport_info_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmsec_lport_info_t,
};

static const issu_field_t bcmissu_fields_bcmsec_pm_info_t[] = {
    {
        .fid = 0x208f156d,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe487f7cd,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0cbd3869,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmsec_pm_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmsec_pm_info_t var;

    switch (field_id) {
        case 0x208f156d:
            return ((uint8_t *)&var.enable) - (uint8_t *)&var;
        case 0xe487f7cd:
            return ((uint8_t *)&var.pm_pair) - (uint8_t *)&var;
        case 0x0cbd3869:
            return ((uint8_t *)&var.sec_blk) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmsec_ha_bcmsec_pm_info_t_v1_4 = {
    .offset_get_func = bcmsec_pm_info_t_field_offset_get,
    .generic_size = sizeof(bcmsec_pm_info_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmsec_pm_info_t,
};

static const issu_field_t bcmissu_fields_bcmsec_dev_info_t[] = {
    {
        .fid = 0x4ba0b663,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x29af02cb,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xd2bb4270,
        .width = sizeof(bcmsec_pm_info_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = NUM_PORT_MACRO,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = 0xd851e467ef01b373,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x6623a680,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = MAX_NUM_SEC_BLOCKS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x1d094cd2,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = MAX_NUM_SEC_BLOCKS,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmsec_dev_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmsec_dev_info_t var;

    switch (field_id) {
        case 0x4ba0b663:
            return ((uint8_t *)&var.num_pport) - (uint8_t *)&var;
        case 0x29af02cb:
            return ((uint8_t *)&var.num_lport) - (uint8_t *)&var;
        case 0xd2bb4270:
            return ((uint8_t *)&var.pm_map_info) - (uint8_t *)&var;
        case 0x6623a680:
            return ((uint8_t *)&var.num_sa_per_sc_encrypt) - (uint8_t *)&var;
        case 0x1d094cd2:
            return ((uint8_t *)&var.num_sa_per_sc_decrypt) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmsec_ha_bcmsec_dev_info_t_v1_4 = {
    .offset_get_func = bcmsec_dev_info_t_field_offset_get,
    .generic_size = sizeof(bcmsec_dev_info_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmsec_dev_info_t,
};