#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   W  |      |   1  |   2  |   3  |   4  |   |  Y   |   U  |   I  |   O  |   P  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |   A  |   S  |   D  |   5  |   6  |   7  |   8  |   |  H   |   J  |   K  |   L  |   ;  |   ]  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |   F  |   T  |   9  |   0  |   -  |   '  |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | Tab  | Space| Space|      | Alt  | LCtrl|      |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_ESC,  KC_W,   XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_BSPC, \
    KC_A,    KC_S,   KC_D,    KC_5,    KC_6,    KC_7,    KC_8,    KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RBRC, KC_ENT, \
    XXXXXXX, KC_F,   KC_T,    KC_9,    KC_0,    KC_MINS, KC_QUOT,   KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_RSFT, \
    KC_TAB,  KC_SPC, KC_SPC,  XXXXXXX, KC_LALT, KC_LCTL, XXXXXXX,  KC_SPC, KC_QUOT, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  /* BASE: 装飾キー左
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |      |   W  |   F  |   1  |   2  |   3  |   |  Y   |   U  |   I  |   O  |   P  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   4  |   5  |   6  |   |  H   |   J  |   K  |   L  |   ;  |   ]  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LCtrl|      | Space|   T  |   7  |   8  |   9  |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LSft |      |      |      |   0  |   -  |   '  |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   *
  [BASE] = LAYOUT( \
    KC_ESC,  XXXXXXX, KC_W,    KC_F,    KC_1,   KC_2,    KC_3,    KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_BSPC, \
    KC_TAB,    KC_A,  KC_S,    KC_D,    KC_4,   KC_5,    KC_6,    KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RBRC, KC_ENT, \
    KC_LCTL, XXXXXXX, KC_SPC,  KC_T,    KC_7,   KC_8,    KC_9,    KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_RSFT, \
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_0,   KC_MINS, KC_QUOT, KC_SPC, KC_QUOT, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT \
  ),
   */

  /* BASE: 親指移動がつらすぎた
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   1  |   2  |   3  |   4  | Up   | Down |   |  Y   |   U  |   I  |   O  |   P  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|   5  |   6  |   7  |   8  | Left | Right|   |  H   |   J  |   K  |   L  |   ;  |   ]  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |   9  |   0  |   -  |   '  |   W  |  F   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LAlt | Space|      |   T  |   A  |   S  |  D   |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   
  [BASE] = LAYOUT( \
    KC_TAB,   KC_1,     KC_2, KC_3,    KC_4,    KC_UP,   KC_DOWN, KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_BSPC, \
    KC_LCTL,  KC_5,     KC_6, KC_7,    KC_8,    KC_LEFT, KC_RGHT, KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RBRC, KC_ENT, \
    KC_LSFT,  KC_9,     KC_0, KC_MINS, KC_QUOT, KC_W,    KC_F,    KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_RSFT, \
    KC_LALT, KC_SPC, XXXXXXX, KC_T,    KC_A,    KC_S,    KC_D,    KC_SPC, KC_QUOT, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT \
  ),
  */

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Reset|   1  |   2  |   3  |   4  |   5  |  [   |   |  ]   |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |  F1  |      |Muhen | Henk |      |      |   | Left | Down |  Up  |Right |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |  F2  |  F3  |  F4  |  F5  |  F6  |  {   |   |  }   |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LGUI | LCtrl|   `  |   \  | LAlt | META |Space |   |Space |   '  |   -  |   =  |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,    KC_RBRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_F1,   XXXXXXX, KC_MHEN, KC_HENK, XXXXXXX, XXXXXXX,    KC_LEFT,    KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, _______, \
    _______, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   S(KC_LBRC), S(KC_RBRC), KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |      |      |      |      |      |  (   |   |  )   |      |      |      |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |      |  UP  | Sft  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | LGUI | LCtrl|   `  |   \  | LAlt | META |Space |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC,    S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
  )

};

