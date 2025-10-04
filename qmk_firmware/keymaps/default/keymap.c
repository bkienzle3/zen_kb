#include QMK_KEYBOARD_H


/* zen keymap
 * home row mods
 */


// layers
enum layers {
    BASE = 0,
    NAV,
    SYM,
    MOUSE,
    NUMS,
    FNS,
    MEDIA,
    CFG,
    BUTTON,
    GFPS,
    GGEN,
    GEXT,
};


//// home row mods for qwerty
#define KC_HRA LGUI_T(KC_A)
#define KC_HRS LALT_T(KC_S)
#define KC_HRD LSFT_T(KC_D)
#define KC_HRF LCTL_T(KC_F)
#define KC_HRJ LCTL_T(KC_J)
#define KC_HRK LSFT_T(KC_K)
#define KC_HRL LALT_T(KC_L)
#define KC_HRQU LGUI_T(KC_QUOT)

// button layer tap
#define KC_BLTZ LT(BUTTON, KC_Z)
#define KC_BLTSH LT(BUTTON, KC_SLSH)

//// thumb buttons
#define KC_THT LT(NAV,KC_TAB)
#define KC_THS LT(MOUSE,KC_SPC)
#define KC_THE LT(SYM,KC_ENT)
#define KC_THB LT(NUMS,KC_BSPC)
#define KC_THESC LT(MEDIA,KC_ESC)
#define KC_THDEL LT(FNS,KC_DEL)

//// copy/paste
#define KC_MCOPY LCTL(KC_C)
#define KC_MPSTE LCTL(KC_V)
#define KC_MCUT LCTL(KC_X)
#define KC_MUNDO LCTL(KC_Z)
#define KC_MREDO LCTL(KC_Y)

//// misc
#define KC_PRVL LALT(KC_LEFT)
#define KC_MSBCK MS_BTN4
#define KC_MSFWD MS_BTN5
#define BR_NTAB LCTL(KC_PGDN)
#define BR_PTAB LCTL(KC_PGUP)

/// gaming
#define KC_GEXT MO(GEXT)
#define KC_GFPS TG(GFPS)
#define KC_GGEN TG(GGEN)
#define KC_BASE TG(BASE)
#define KC_ENTGX LT(GEXT,KC_ENT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



   // base (qwerty) layer
   [BASE] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_HRA,  KC_HRS,  KC_HRD,  KC_HRF,    KC_G,                         KC_H,  KC_HRJ,  KC_HRK,  KC_HRL, KC_HRQU,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_BLTZ,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT,KC_BLTSH,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,KC_THESC,  KC_THT,  KC_THS,     KC_THE,  KC_THB, KC_THDEL,  KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // nav layer
   [NAV] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
        KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,                     KC_MPSTE,KC_MCOPY, KC_MCUT,KC_MUNDO,KC_MREDO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_PRVL,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_CAPS,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_APP,  KC_F18,  KC_F19,  KC_F21,  KC_F22,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_INS,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,     KC_ENT, KC_BSPC,  KC_DEL,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // mouse/fancy/orphans
   [MOUSE] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_MSBCK,   KC_NO,   KC_NO,KC_MSFWD,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL,   KC_NO,                      MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,    MS_BTN1, MS_BTN2, MS_BTN3,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // convienience buttons
   [BUTTON] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
         KC_NO,  KC_F10,  KC_F11,  KC_F12,  KC_F24,                        KC_NO,   KC_NO,   KC_NO, KC_WAKE,  KC_PWR,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO,   KC_NO,   KC_NO,   KC_F5,KC_MUNDO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO, KC_MCUT,KC_MCOPY,KC_MPSTE,KC_MREDO,                      MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // numbers
   [NUMS] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
       KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                        KC_NO,    KC_A,    KC_B,    KC_C,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      KC_GFPS, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      KC_GGEN,    KC_D,    KC_E,    KC_F,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,  KC_DOT,  KC_MINS,   KC_0,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // symbol/extra functions
   [SYM] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
       KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                        KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_LPRN, KC_UNDS, KC_RPRN,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),


   // function keys
   [FNS] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
        KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_LGUI,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PAUS,                         KC_Q,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,  KC_ESC,  KC_TAB,  KC_SPC,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),


   // media keys
   [MEDIA] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
         KC_NO,   KC_NO,   KC_NO,   KC_NO, MO(CFG),                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL,   KC_NO,                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,    KC_MSTP, KC_MPLY, KC_MUTE,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),


   // FPS games, base layer
   [GFPS] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                       KC_TAB,    KC_G,   KC_NO,    KC_O,    KC_P,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_RCTL,    KC_A,    KC_S,    KC_D,    KC_F,                      KC_GFPS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,                        KC_NO,    KC_M,   KC_NO,   KC_F1,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_LALT, KC_GEXT,  KC_SPC,     KC_ENT,  KC_ESC,   KC_NO,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // Generic gaming layer
   // This still needs work. For example, if a game uses Ctrl, Alt, or Shift, you must switch back to the base layer.
   [GGEN] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_LCTL,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,  KC_ESC,  KC_TAB,  KC_SPC,   KC_ENTGX, KC_LSFT,  KC_DEL,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // Gaming, Extra layer, Mainly used for FPS, but called from generic to return to base.
   [GEXT] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
          KC_1,    KC_G, KC_TRNS,    KC_B,    KC_4,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
          KC_2, KC_TRNS, KC_TRNS, KC_TRNS,    KC_5,                      KC_GFPS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
          KC_3,    KC_G,    KC_H,    KC_T,    KC_6,                      KC_GGEN,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO,    KC_N, KC_TRNS, KC_TILD,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   ),

   // hidden functions, reset, etc
   [CFG] = LAYOUT_split_3x5_4(
   //,--------------------------------------------.                    ,--------------------------------------------.
         KC_NO,   KC_NO,   DT_UP, DT_PRNT,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO,   KC_NO, DT_DOWN,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
   //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                           KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO
                     //`-----------------------------------'  `-----------------------------------'
   )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_HRD:
            return TAPPING_TERM - 40;
        case KC_HRK:
            return TAPPING_TERM - 40;
        case KC_HRS:
            return TAPPING_TERM + 50;
        case KC_HRL:
            return TAPPING_TERM + 50;
        case KC_HRA:
            return TAPPING_TERM + 50;
        case KC_HRQU:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = {   ENCODER_CCW_CW(BR_PTAB, BR_NTAB),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [SYM] = {    ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [MOUSE] = {  ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [NUMS] = {   ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [FNS] = {    ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [MEDIA] = {  ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [CFG] = {    ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [BUTTON] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLL, MS_WHLR), ENCODER_CCW_CW(KC_UP, KC_DOWN)  },
    [GFPS] = {   ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [GGEN] = {   ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
    [GEXT] = {   ENCODER_CCW_CW(KC_LEFT, KC_RGHT),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  },
};
#endif

#if defined(SPLIT_POINTING_ENABLE)
void keyboard_post_init_user(void) {
    pointing_device_set_cpi(400); //Set cpi on right side to a reasonable value for mousing.
}
#endif
