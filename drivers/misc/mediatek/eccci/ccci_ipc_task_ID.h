/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __CCCI_IPC_TASK_ID_H__
#define __CCCI_IPC_TASK_ID_H__
/* Priority   -->   Local module ID -->     External ID     --> Max sent message */
/* X_IPC_MODULE_CONF(1,M_SSDBG1,0,1)     //TASK_ID_1 */
/* X_IPC_MODULE_CONF(1,AP_SSDBG2,1,1)     //TASK_ID_2 */
#ifdef __IPC_ID_TABLE
#define X_IPC_MODULE_CONF(a, b, c, d) {c, b},
#else
#define X_IPC_MODULE_CONF(a, b, c, d)
#endif

#define AP_UNIFY_ID_FLAG (1<<31)
#define MD_UNIFY_ID_FLAG (0<<31)

/* ---------------------------------------------------------- */
#define    MD_MOD_L4C    0
#define    MD_MOD_L4C_2  1
#define    MD_MOD_L4C_3  2
#define    MD_MOD_L4C_4  3
#define    MD_MOD_AOMGR  4
#define    MD_MOD_EL1    5
#define    MD_MOD_MISC_TA 6
#define    MD_MOD_CCCIIPC 7
#define    MD_MOD_GF     8

#define    AP_MOD_AGPS   (0 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_DHCP   (1 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_GPS    (2 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_WMT    (3 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_MISC_TA (4 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_CCCIIPC (5 | AP_UNIFY_ID_FLAG)
#define    AP_MOD_GF     (6 | AP_UNIFY_ID_FLAG)

#define    AP_IPC_AGPS   0
#define    AP_IPC_DHCP   1
#define    AP_IPC_GPS    2
#define    AP_IPC_WMT    3
#define    AP_MISC_TA    4
#define    AP_IPC_CCCIIPC 5
#define    AP_IPC_GF     6

/* -------------------------------------------------------------------------- */
X_IPC_MODULE_CONF(1, MD_MOD_L4C, MD_UNIFY_ID_FLAG | 0, 1)
X_IPC_MODULE_CONF(1, MD_MOD_L4C_2, MD_UNIFY_ID_FLAG | 1, 1)
X_IPC_MODULE_CONF(1, MD_MOD_L4C_3, MD_UNIFY_ID_FLAG | 2, 1)
X_IPC_MODULE_CONF(1, MD_MOD_L4C_4, MD_UNIFY_ID_FLAG | 3, 1)
X_IPC_MODULE_CONF(1, MD_MOD_AOMGR, MD_UNIFY_ID_FLAG | 4, 1)
X_IPC_MODULE_CONF(1, MD_MOD_EL1, MD_UNIFY_ID_FLAG | 5, 1)
X_IPC_MODULE_CONF(1, MD_MOD_MISC_TA, MD_UNIFY_ID_FLAG | 6, 1)
X_IPC_MODULE_CONF(1, MD_MOD_CCCIIPC, MD_UNIFY_ID_FLAG | 7, 1)
X_IPC_MODULE_CONF(1, MD_MOD_GF, MD_UNIFY_ID_FLAG | 8, 1)

/* -------------------------------------------------------------------------- */
X_IPC_MODULE_CONF(1, AP_IPC_AGPS, AP_UNIFY_ID_FLAG | 0, 1)
X_IPC_MODULE_CONF(1, AP_IPC_DHCP, AP_UNIFY_ID_FLAG | 1, 1)
X_IPC_MODULE_CONF(1, AP_IPC_GPS, AP_UNIFY_ID_FLAG | 2, 1)
X_IPC_MODULE_CONF(1, AP_IPC_WMT, AP_UNIFY_ID_FLAG | 3, 1)
X_IPC_MODULE_CONF(1, AP_MISC_TA, AP_UNIFY_ID_FLAG | 4, 1)
X_IPC_MODULE_CONF(1, AP_IPC_CCCIIPC, AP_UNIFY_ID_FLAG | 5, 1)
X_IPC_MODULE_CONF(1, AP_IPC_GF, AP_UNIFY_ID_FLAG | 6, 1)
/* ------------------------------------------------------------------------- */
#endif
