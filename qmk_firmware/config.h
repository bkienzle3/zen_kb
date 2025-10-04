// Copyright 2025 bkienzle3 (@bkienzle3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

#define ENCODER_A_PINS { GP3, GP19 }
#define ENCODER_B_PINS { GP4, GP10 }
#define ENCODER_RESOLUTIONS { 4, 4 }
#define ENCODER_A_PINS_RIGHT { GP3 }
#define ENCODER_B_PINS_RIGHT { GP4 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }



#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
#define POINTING_DEVICE_ROTATION_90
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
#define CIRQUE_PINNACLE_CURVED_OVERLAY

//#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP20
#define POINTING_DEVICE_CS_PIN GP10
#undef CIRQUE_PINNACLE_DIAMETER_MM
#define CIRQUE_PINNACLE_DIAMETER_MM 40

//#define SPI_MOSI_PIN GP19
//#define SPI_MOSI_PIN GP20
/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

// handedness
#define EE_HANDS

// mouse settings
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 15
#define MOUSEKEY_MOVE_DELTA 3
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_MAX_SPEED 1

// homerow mods
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 90
#define TAPPING_TERM_PER_KEY
