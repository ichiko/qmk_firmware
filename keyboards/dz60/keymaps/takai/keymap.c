#include "dz60.h"

#define _BASE 0
#define _FN1 1

#define KC_ KC_TRNS
#define KC_FN1 MO(_FN1)
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RST RESET

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  [_BASE] = LAYOUT_kc(
    // |----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|
        GESC, 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  ,MINS,EQL ,    ,BSPC,\
    // |----+----+----+----+----+----+----+----+----+----+----+----+----+---------|
        TAB   , Q  , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,LBRC,RBRC, BSLS  ,\
    // |------+----+----+----+----+----+----+----+----+----+----+----+----+-------|
        LCTL   , A  , S  , D  , F  , G  , H  , J  , K  , L  ,SCLN,QUOT, ENT ,     ,\
    // |-------+----+----+----+----+----+----+----+----+----+----+----+-----------|
        LSFT,    , Z  , X  , C  , V  , B  , N  , M  ,COMM,DOT ,    ,SLSH, UP ,    ,\
    // |---------+----+----+----+----+----+----+----+----+----+---------+----+----|
        FN1  ,LALT  ,LCTL, SPC, SPC, SPC                 ,RGUI,RALT,LEFT,DOWN,RGHT
    // |-----+-----+-----+-------------------------------+----+----+----+----+----|
  ),
  [_FN1] = LAYOUT_kc(
    // |----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|
        GRV ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,VOLD,VOLU,    ,BSPC,\
    // |----+----+----+----+----+----+----+----+----+----+----+----+----+---------|
              ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,       ,\
    // |------+----+----+----+----+----+----+----+----+----+----+----+----+-------|
               ,RTOG,RMOD,RHUI,RSAI,RVAI,    ,    ,    ,    ,    ,    ,     ,     ,\
    // |-------+----+----+----+----+----+----+----+----+----+----+----+-----------|
            ,    ,    ,    ,RHUD,RSAD,RVAD,    ,    ,    ,    ,    ,    ,    ,    ,\
    // |---------+----+----+----+----+----+----+----+----+----+---------+----+----|
             ,     ,     ,    ,    ,                     ,    ,    ,    ,    ,RST
    // |-----+-----+-----+-------------------------------+----+----+----+----+----|
  ),
};
