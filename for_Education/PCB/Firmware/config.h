#pragma once

#define NKRO_DEFAULT_ON true

/* Rotary Encoder related config */
#define ENCODER_A_PINS { D1 }
#define ENCODER_B_PINS { D2 }

/* Layer Lock related config */
#define LAYER_INDICATOR_PIN B7
#define LAYER_LOCK_LAYER 3

/* VIA related config */
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 1
#define DYNAMIC_KEYMAP_LAYER_COUNT 4