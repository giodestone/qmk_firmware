#BOARD = GENERIC_RP_RP2040 # maybe superceded in info.json?

I2C_DRIVER_REQUIRED = yes

OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c
OPT_DEFS += -DHAL_USE_I2C=TRUE

ENCODER_ENABLE = yes

LTO_ENABLE = no # reduce binary size at compilation expense

# Build Options
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
CONSOLE_ENABLE = yes        # Console for debug(+400)
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes            # Nkey Rollover
BACKLIGHT_ENABLE = no       # There are no leds
MIDI_ENABLE = no            # No MIDI controls
AUDIO_ENABLE = no           # We don't have audio
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # We don't have BT
RGBLIGHT_ENABLE = no        # We don't have underglow