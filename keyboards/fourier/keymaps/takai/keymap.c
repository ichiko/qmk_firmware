#include "fourier.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_FN1 MO(_FN1)
#define KC_FN2 MO(_FN2)
#define KC_SPFN1 LT(_FN1, KC_SPACE)
#define KC_SPFN2 LT(_FN2, KC_SPACE)
#define KC_BSFN1 LT(_FN1, KC_BSPC)
#define KC_BSFN2 LT(_FN2, KC_BSPC)
#define KC_TBCTL CTL_T(KC_TAB)
#define KC_RST RESET
#define KC_DBUG DEBUG
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    GESC, Q  , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,LCBR,RCBR,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
    TBCTL, A  , S  , D  , F  , G  , H  , J  , K  , L  ,SCLN, ENTER  ,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
    LSFT   , Z  , X  , C  , V  , B  , N  , M  ,COMM,DOT ,SLSH, RSFT ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
    FN1  ,LALT,LGUI ,    , SPFN1  , BSFN2  ,RGUI ,RALT , FN2 , FN1
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  ) ,

  [_FN1] = LAYOUT_kc(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    GRV , 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  ,MINS,EQL ,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
         ,    ,    ,    ,    ,    ,    , 4  , 5  , 6  ,    , QUOT   ,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
          ,     ,    ,    ,    ,    ,    , 1  , 2  , 3  , UP , RGHT ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
         ,    ,     ,    ,        ,  RST   ,  0  ,LEFT ,DOWN ,
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  ),

  [_FN2] = LAYOUT_kc(
 //,----+----+----+----+----+----|----+----+----+----+----+----+----.
    TAB ,EXLM, AT ,HASH,DLR ,PERC,CIRC,AMPR,ASTR,LPRN,RPRN,UNDS,PLUS,
 //|----`----`----`----`----`----|----`----`----`----`----`----`----|
         ,    ,    ,INS ,PGUP,HOME,    ,    ,    ,    ,    , DQUO   ,
 //|-----`----`----`----`----`----|----`----`----`----`----`--------|
           ,    ,    ,DEL ,PGDN,END ,    ,    ,    ,    ,    ,      ,
 //|-------`----`----`----`----`----|----`----`----`----`----`------|
         ,    ,     ,LGUI,  RST   ,        ,     ,     ,     ,
 //`-----+----+-----+----+--------|--------+-----+-----+-----+------'
  )

};
