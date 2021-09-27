/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

// Custom MakerPi 2.0.8 board pins.
#pragma once

#include "../mega/env_validate.h"

#define BOARD_INFO_NAME "MakerPi 2.0.8"

// Limit Switches
#ifndef X_STOP_PIN
  #ifndef X_MIN_PIN
    #define X_MIN_PIN 22
  #endif
#endif
#ifndef Y_STOP_PIN
  #ifndef Y_MIN_PIN
    #define Y_MIN_PIN 26
  #endif
#endif
#ifndef Z_STOP_PIN
  #ifndef Z_MIN_PIN
    #define Z_MIN_PIN 30
  #endif
#endif

// Z Probe (when not Z_MIN_PIN)
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN -1
#endif

// Steppers
#define X_DIR_PIN 23
#define X_STEP_PIN 25
#define X_ENABLE_PIN 27

#define Y_DIR_PIN 33
#define Y_STEP_PIN 31
#define Y_ENABLE_PIN 29

#define Z_DIR_PIN 39
#define Z_STEP_PIN 37
#define Z_ENABLE_PIN 35

#define E0_STEP_PIN 43
#define E0_DIR_PIN 45
#define E0_ENABLE_PIN 41

#define E1_STEP_PIN 49
#define E1_DIR_PIN 47
#define E1_ENABLE_PIN 48

// Temperature Sensors
#ifndef TEMP_0_PIN
  #define TEMP_0_PIN 8 // Analog Input
#endif
#ifndef TEMP_1_PIN
  #define TEMP_1_PIN 9 // Analog Input
#endif
#ifndef TEMP_BED_PIN
  #define TEMP_BED_PIN 10 // Analog Input
#endif

// Heaters / Fans
#ifndef MOSFET_D_PIN
  #define MOSFET_D_PIN -1
#endif

#define HEATER_0_PIN 2
#define HEATER_1_PIN 3
#define HEATER_BED_PIN 4

// #define FAN_PIN   7 // PWM pin - Unused
#define FAN_PIN  44 // Fan pin - Layer fan
#define FAN1_PIN 32 // Board fan - Has the hot-end fan wired as well.

// LCD + SD module.
#ifndef EXP1_01_PIN
  #define EXP1_01_PIN 18 // Beeper
  #define EXP1_02_PIN 19 // Encoder Button
  #define EXP1_03_PIN 17 // Enable
  #define EXP1_04_PIN 20 // Reset
  #define EXP1_05_PIN 16 // D4
  #define EXP1_06_PIN 21 // D5
  #define EXP1_07_PIN 5 // D6
  #define EXP1_08_PIN 6 // D7

  #define EXP2_01_PIN 50 // MISO
  #define EXP2_02_PIN 52 // SCK
  #define EXP2_03_PIN 42 // Encoder A
  #define EXP2_04_PIN 53 // CS
  #define EXP2_05_PIN 40 // Encoder B
  #define EXP2_06_PIN 51 // MOSI
  #define EXP2_07_PIN 38 // SD Detect
#endif

// Misc. Functions
#define LED_PIN 13

// LCDs and Controllers
#define BEEPER_PIN EXP1_01_PIN
#define LCD_PINS_ENABLE EXP1_03_PIN
#define LCD_PINS_RS EXP1_04_PIN
#define LCD_PINS_D4 EXP1_05_PIN
#define LCD_PINS_D5 EXP1_06_PIN
#define LCD_PINS_D6 EXP1_07_PIN
#define LCD_PINS_D7 EXP1_08_PIN

#define BTN_EN1 EXP2_05_PIN
#define BTN_EN2 EXP2_03_PIN
#define BTN_ENC EXP1_02_PIN

#define SD_SCK_PIN EXP2_02_PIN
#define SD_MISO_PIN EXP2_01_PIN
#define SD_MOSI_PIN EXP2_06_PIN
#define SD_SS_PIN EXP2_04_PIN
#define SD_DETECT_PIN EXP2_07_PIN
#ifndef SDSS
  #define SDSS SD_SS_PIN
#endif
