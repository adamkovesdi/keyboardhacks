# adamkov's keyboard hacks

![My thrusty IBM Model M keyboard](https://i.imgur.com/pGrHjje.jpg)
My thrusty old daily driver IBM Model M keyboard

## description

These are the keyboard hacks I have been using with my vintage and modern keyboards.

## IBM Model M keyboard

TMK keyboard firmware running on Arduino Pro micro wired as a PS2 converter.  
My custom keyboard layout with function layer:

```
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

```

CapsLock is remapped to ESCAPE on tap, and FN on hold as a diehard vim user I find this essential  
ScrollLock is remapped to Gui key as there is no Win key on the vintage Model M  

## TADA68

I'm running QMK firmware on my TADA68 keyboard. Keymap, etc can be found in ![tada68keymap/](tada68keymap/) folder.

## GSE KPT-84

I'm using this through the same converter as my Model M with the same keymap. Full functionality is present.

![builtin converter](https://i.imgur.com/rZ6ZybP.jpg)
KPT-84 with inbuilt converter

## links

- https://github.com/tmk/tmk_keyboard
- https://github.com/qmk/qmk_firmware


