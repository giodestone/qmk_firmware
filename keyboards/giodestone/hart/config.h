#pragma once

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
// #define MANUFACTURER Giodestone
// #define PRODUCT HartKeyboardv1
//#define DESCRIPTION A custom handmade keyboard. // according to QMK should be removed.

#define DIODE_DIRECTION ROW2COL // may need to change this
#define MATRIX_ROWS 15
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP22, GP26, GP27 }
#define MATRIX_COL_PINS { GP0, GP1, GP6, GP7, GP8, GP28 }

/* OLED Config */
#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 0 // disable timeout, enabling may cause memory corruption
//#define OLED_FADE_OUT // this may case memory corruption for some reason.

#undef I2C_DRIVER
#define I2C_DRIVER I2CD0
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP4
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP5


// #define I2C1_CLOCK_SPEED 400000

/*Encoder Config*/
// #undef ENCODERS_PAD_A
#define ENCODERS_PAD_A { GP3 } // Inverted, as clockwise should be +volume, and counterclockwise should be -vol
// #undef ENCODERS_PAD_B
#define ENCODERS_PAD_B { GP2 }


/* FULL KEYMAP
 * Items with a '!' prefix indicate that something may not be obvious
 * Mac = Macro
 * PotB = Potentiometer Button
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+
| Row/Col |   1    | 2  |  3  |  4  |   5   |   6   |   7   |   8   |   9   |  10   |  11  |  12   |   13   |   14   |  15   |
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+
|       6 | ESC    | F1 | F2  | F3  | F4    | F5    | F6    | F7    | F8    | F9    | F10  | F11   | F12    | PrtSc  | !Del  |
|       5 | `      | 1  | 2   | 3   | 4     | 5     | 6     | 7     | 8     | 9     | 0    | -     | =      | BkSp   | Home  |
|       4 | Tab    | Q  | W   | E   | R     | T     | Y     | U     | I     | O     | P    | [     | ]      | !Ins   | PgUp  |
|       3 | Caps   | A  | S   | D   | F     | G     | H     | J     | K     | L     | ;    | '     | #      | Return | PgDn  |
|       2 | LShift | \  | Z   | X   | C     | V     | B     | N     | M     | ,     | .    | /     | RShift | UP     | End   |
|       1 | LCtrl  | Fn | Win | Alt | !NULL | !Mac3 | Space | !Mac2 | !Mac1 | !PotB | RAlt | RCtrl | LEFT   | DOWN   | RIGHT |
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+
*/


// OLED
// pin 1 / gp0 - SDA // NNO PIN 6 xxx GP4 SDA
// pin 2 / gp1 - SCL // NO PIN 7 xxx GP5 SCL
// pin 3 - GND
// pin 36/3V3 - VCC

// Rotary Encoder
// NO NO NO NOW MATRIXd IN pin 4 / gp 2 - button
// pin 4 / gp 2 - rot check 1
// pin 5 / gp 3 - rot check 2
// pin 8 / GND - GND

// pin 6 / gp 4 - COL 1 // NO PIN 1 // NO GP25 (goodbye LED) xxx GP25 // NO GP0
// pin 7 / gp 5 - COL 2 // NO PIN 2 xx GP1
// pin 9/ gp 6 - COL 3
// pin 10/ gp 7 - COL 4
// pin 11/ gp 8 - COL 5
// pin 12/ gp 9 - COL 6

// pin 14/ gp10 - ROW 1
// pin 15/ gp11 - ROW 2
// pin 16/ gp12 - ROW 3
// pin 17/ gp13 - ROW 4
// pin 19/ gp14 - ROW 5
// pin 20/ gp15 - ROW 6
// pin 21/ gp16 - ROW 7
// pin 22/ gp17 - ROW 8
// pin 24/ gp18 - ROW 9
// pin 25/ gp19 - ROW 10
// pin 26/ gp20 - ROW 11
// pin 27/ gp21 - ROW 12
// gp 23-24 idk where it is??
// gp 25 onboard LED
// pin 29/ gp22 - ROW 13
// pin 31/ gp26 - ROW 14
// pin 32/ gp27 - ROW 15
// pin 34/ gp28 - ROW 16 // NO AXED DOESN'T EXIST ANYMORE


// =======
// ARCHIVE
// =======
/* FULL KEYMAP - Items with a '!' prefix indicate that something may not be obvious
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
| Row/Col |   1    | 2  |  3  |  4  |   5   |   6   |   7   |   8   |   9   |  10   |  11  |  12   |   13   |   14   |  15   |   16    |
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
|       6 | ESC    | F1 | F2  | F3  | F4    | F5    | F6    | F7    | F8    | F9    | F10  | F11   | F12    | PrtSc  | !Del  | !NULL   |
|       5 | `      | 1  | 2   | 3   | 4     | 5     | 6     | 7     | 8     | 9     | 0    | -     | =      | BkSp   | Home  | PotBtn  |
|       4 | Tab    | Q  | W   | E   | R     | T     | Y     | U     | I     | O     | P    | [     | ]      | !Ins   | PgUp  | !NULL   |
|       3 | Caps   | A  | S   | D   | F     | G     | H     | J     | K     | L     | ;    | '     | #      | Return | PgDn  | Macro 1 |
|       2 | LShift | \  | Z   | X   | C     | V     | B     | N     | M     | ,     | .    | /     | RShift | UP     | End   | Macro 2 |
|       1 | LCtrl  | Fn | Win | Alt | !NULL | !NULL | Space | !NULL | !NULL | !NULL | RAlt | RCtrl | LEFT   | DOWN   | RIGHT | Macro 3 |
+---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
*/