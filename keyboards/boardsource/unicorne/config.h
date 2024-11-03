// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define STAR_WARS_THEME \
    H__NOTE(_G4), H__NOTE(_G4), H__NOTE(_G4), \
    W__NOTE(_C5), WD_NOTE(_G5), \
    H__NOTE(_F5), H__NOTE(_E5), H__NOTE(_D5), \
    B__NOTE(_C6), W__NOTE(_G5), \
    H__NOTE(_F5), H__NOTE(_E5), H__NOTE(_D5), \
    B__NOTE(_C6), W__NOTE(_G5), \
    H__NOTE(_F5), H__NOTE(_E5), H__NOTE(_F5), \
    W__NOTE(_D5)

/*#define NOKIA_TUNE \*/
/*    Q__NOTE(_E5), Q__NOTE(_D5), H__NOTE(_FS4), H__NOTE(_GS4), \*/
/*    Q__NOTE(_CS5), Q__NOTE(_B4), H__NOTE(_D4), H__NOTE(_E4), \*/
/*    Q__NOTE(_B4), Q__NOTE(_A4), H__NOTE(_CS4), H__NOTE(_E4), \*/
/*    W__NOTE(_A4)*/

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY 1000
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(STAR_WARS_THEME)

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X
