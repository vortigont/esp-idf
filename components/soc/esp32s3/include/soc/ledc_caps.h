/*
 * SPDX-FileCopyrightText: 2019-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define SOC_LEDC_HAS_TIMER_SPECIFIC_MUX  (1)
#define SOC_LEDC_SUPPORT_REF_TICK    (1)
#define SOC_LEDC_SUPPORT_XTAL_CLOCK  (1)
#define SOC_LEDC_CHANNEL_NUM 8
#define SOC_LEDC_TIMER_BIT_WIDE_NUM  (14)
#define SOC_LEDC_SUPPORT_FADE_STOP   (1)

#ifdef __cplusplus
}
#endif
