#pragma once

#include_next <mcuconf.h>

// #undef RP_I2C_USE_I2C0
// #define RP_I2C_USE_I2C0 TRUE

// #undef RP_I2C_USE_I2C1
// #define RP_I2C_USE_I2C1 FALSE

// There's some debate on discord about this. I am a noob who knows little about I2C other than its a bus, and it has a timetable and arrives at stops.
// If you look at pinout I2C0 is what the OLED is connected to (GP0 SDA, GP1 SCL for I2C0).
// So for the OLED to work I'd need to use I2C0

#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE

#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE