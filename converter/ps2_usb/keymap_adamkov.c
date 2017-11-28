/*
 * adamkov layout based on SpaceFn - CapsLock is the Fn0 key
 * (c) 2017
 */
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|Gui|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|   |
     * |-----------------------------------------------------------| `-----------' |-----------|  +|
     * |Fn0ESC|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * |Ctrl |Gui |Alt |         Space         |Alt |Gui |Menu|Ctrl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,LGUI,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,
    FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    /* 1: Fn0 layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |   |Mbr|McU|Mbl|   |   |PgU|Hom|   |Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Cap|McL|McD|McR|   |Lef|Dow|Up |Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |VlD|VlU|Mut|   |   |PgD|End|   |Men|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TRNS,TRNS,BTN2,MS_U,BTN1,TRNS,TRNS,PGUP,HOME,TRNS,PSCR,SLCK,PAUS,INS,      DEL, END, PGDN,    P7,  P8,  P9,
    TRNS,CAPS,MS_L,MS_D,MS_R,TRNS,LEFT,DOWN,  UP,RGHT,TRNS,TRNS,     TRNS,                        P4,  P5,  P6,  PPLS,
    TRNS,TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PGDN, END, TRNS,APP,          TRNS,          UP,           P1,  P2,  P3,
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     MPRV,DOWN,MNXT,    P0,       PDOT,PENT
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_ESCAPE),
};


/*

flashing on my machine:

make clean
vi keymap_adamkov.c
make -f Makefile KEYMAP=adamkov
sudo avrdude -patmega32u4 -cavr109 -b57600 -Uflash:w:ps2_usb.hex -P/dev/ttyACM0

GIT diff of files:

diff --git a/converter/ps2_usb/Makefile b/converter/ps2_usb/Makefile
index 5f9c404..62bb090 100644
--- a/converter/ps2_usb/Makefile
+++ b/converter/ps2_usb/Makefile
@@ -33,7 +33,7 @@ CONFIG_H ?= config.h
 
 
 # MCU name
-MCU ?= atmega32u2
+MCU ?= atmega32u4
 
 # Processor frequency.
 #     This will define a symbol, F_CPU, in all source code files equal to the
@@ -89,10 +89,10 @@ OPT_DEFS += -DBOOTLOADER_SIZE=$(BOOTLOADER_SIZE)
 #   comment out to disable the options.
 #
 BOOTMAGIC_ENABLE ?= no	# Virtual DIP switch configuration(+1000)
-MOUSEKEY_ENABLE ?= no	# Mouse keys(+4700)
+MOUSEKEY_ENABLE ?= yes	# Mouse keys(+4700)
 EXTRAKEY_ENABLE ?= yes	# Audio control and System control(+450)
-CONSOLE_ENABLE ?= yes	# Console for debug(+400)
-COMMAND_ENABLE ?= yes    # Commands for debug and configuration
+CONSOLE_ENABLE ?= no	# Console for debug(+400)
+COMMAND_ENABLE ?= no    # Commands for debug and configuration
 NKRO_ENABLE ?= yes	# USB Nkey Rollover
 
 

*/
