// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
  ST_MACRO_0 = SAFE_RANGE,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _LAYER3,
  _LAYER4,
  _LAYER5,
  _LAYER7,
  _LAYER8,
  _LAYER9,
  _LAYER10,
  _LAYER11,
  _LAYER12,
  _LAYER13,
  _LAYER14,
  _LAYER15,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define DUAL_FUNC_0 LT(4, LALT(KC_SPACE))
#define DUAL_FUNC_1 LT(_LOWER, KC_BSPC)
#define DUAL_FUNC_2 LT(_RAISE, KC_ENTER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
        LT(8, KC_GRAVE),KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                               QK_BOOT,           KC_L,           KC_U,           KC_Y,           LSFT(KC_SCLN),  KC_BSPC,
        LT(3, KC_TAB),  MT(MOD_LCTL, KC_A),KC_R,           KC_S,           KC_T,           KC_G,                               KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           MT(MOD_LCTL, KC_QUOTE),
        TD(DANCE_0),    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                               KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_QUES,        MT(MOD_RSFT, KC_ENTER),
        DUAL_FUNC_0,    TD(DANCE_1),    KC_LEFT_ALT,    KC_LEFT_GUI,    DUAL_FUNC_1,    LT(9, KC_SPACE),                    DUAL_FUNC_2,    LT(5, KC_LEFT), LT(12, KC_DOWN),KC_UP,          LT(7, KC_RIGHT),KC_NO,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LOWER] = LAYOUT(
        KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_LBRC,                            KC_RBRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_SCLN,        KC_CAPS,
        KC_QUES,        KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_LPRN,                            KC_RPRN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_LCBR,        KC_PIPE,
        KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_MINUS,                           KC_PLUS,        KC_EXLM,        KC_AT,          KC_HASH,        KC_SLASH,       KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_RAISE] = LAYOUT(
        ST_MACRO_0,     KC_EXLM,        KC_LCBR,        KC_LBRC,        KC_LPRN,        KC_MINUS,                           KC_PLUS,        KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_EQUAL,       ST_MACRO_1,
        KC_TAB,         KC_PIPE,        KC_LEFT,        LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_LEFT),                      LGUI(KC_RIGHT), LALT(KC_LEFT),  LALT(KC_RIGHT), KC_RIGHT,       KC_DLR,         ST_MACRO_2,
        KC_TRANSPARENT, KC_BSLS,        KC_DOWN,        LGUI(KC_BSPC),  LCTL(KC_K),     KC_LABK,                            KC_RABK,        LALT(KC_BSPC),  LALT(KC_DELETE),KC_UP,          KC_SLASH,       KC_EQUAL,
        KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,KC_NO,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LAYER3] = LAYOUT(
        KC_ESCAPE,      KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     LALT(LSFT(KC_W)),                   LALT(LSFT(KC_LBRC)),KC_7,           KC_8,           KC_9,           KC_SCLN,        KC_DELETE,
        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_UNDS,                            LALT(LSFT(KC_2)),KC_4,           KC_5,           KC_6,           KC_SLASH,       KC_BSLS,
        KC_TRANSPARENT, KC_SLASH,       KC_MINUS,       KC_COMMA,       KC_COLN,        KC_MINUS,                           KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_0,           ST_MACRO_3,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       MT(MOD_LGUI, KC_DOT),KC_TRANSPARENT, KC_SPACE,                       KC_ENTER,       KC_PLUS,        KC_MINUS,       KC_UNDS,        KC_ASTR,        KC_NO,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LAYER4] = LAYOUT(
        LGUI(LCTL(KC_Q)),KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(13),         ST_MACRO_7,     TO(14),                             KC_TRANSPARENT, ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER5] = LAYOUT(
        ST_MACRO_11,    KC_EXLM,        KC_LCBR,        KC_LBRC,        KC_LPRN,        KC_MINUS,                           KC_PLUS,        KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_EQUAL,       ST_MACRO_12,
        RALT(KC_5),     KC_PIPE,        KC_LEFT,        LCTL(KC_LEFT),  LCTL(KC_RIGHT), KC_HOME,                            KC_END,         RCTL(KC_LEFT),  LCTL(KC_RIGHT), KC_RIGHT,       KC_DLR,         ST_MACRO_13,
        KC_TRANSPARENT, KC_BSLS,        KC_DOWN,        LSFT(KC_HOME),  LSFT(KC_END),   KC_LABK,                            KC_RABK,        LCTL(KC_BSPC),  LCTL(LSFT(KC_RIGHT)),KC_UP,          KC_SLASH,       KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER7] = LAYOUT(
        KC_TRANSPARENT, LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_W))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(LSFT(KC_4))),LGUI(LSFT(KC_4)),
        KC_TRANSPARENT, LALT(LCTL(LSFT(KC_A))),KC_TRANSPARENT, LALT(LCTL(LSFT(KC_S))),KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_O))),KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(LSFT(KC_A)),LGUI(LSFT(KC_V)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER8] = LAYOUT(
        KC_TRANSPARENT, LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LGUI(KC_F6),    LSFT(KC_F6),    LALT(LSFT(KC_B)),                   LGUI(KC_7),     LALT(KC_COMMA), LALT(LCTL(KC_COMMA)),LALT(LCTL(KC_DOT)),LALT(KC_DOT),   KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_T)),KC_TRANSPARENT, ST_MACRO_14,                        ST_MACRO_15,    LGUI(KC_LBRC),  KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_RBRC),  LGUI(KC_1),
        ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    LGUI(LSFT(KC_8)),ST_MACRO_19,    ST_MACRO_20,                        KC_TRANSPARENT, ST_MACRO_21,    LALT(LSFT(KC_TAB)),LALT(KC_TAB),   KC_TRANSPARENT, ST_MACRO_22,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_23,    LALT(LGUI(KC_V)),KC_TRANSPARENT,                     LALT(LGUI(KC_M)),ST_MACRO_24,    LALT(LSFT(KC_DOWN)),LALT(LSFT(KC_UP)),KC_TRANSPARENT,KC_NO,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LAYER9] = LAYOUT(
        KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_MS_WH_UP,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_MS_WH_DOWN,                      KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER10] = LAYOUT(
        KC_TRANSPARENT, LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_5),     LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_MINUS), LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LGUI(KC_KP_PLUS),KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER11] = LAYOUT(
        KC_TRANSPARENT, LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LCTL(KC_5),     LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LCTL(KC_MINUS), LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LCTL(KC_KP_PLUS),KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER12] = LAYOUT(
        KC_TRANSPARENT, ST_MACRO_25,    KC_TRANSPARENT, LCTL(KC_LBRC),  KC_COMMA,       KC_TILD,                            KC_TRANSPARENT, KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_26,
        KC_DOWN,        LSFT(KC_I),     KC_LEFT,        KC_B,           KC_W,           KC_UNDS,                            KC_DLR,         KC_B,           KC_W,           KC_RIGHT,       LSFT(KC_A),     KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_U),     LCTL(KC_D),     LCTL(KC_Y),                         LCTL(KC_E),     KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

  [_LAYER13] = LAYOUT(
        KC_P,           KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_F1,                              KC_F2,          KC_F3,          KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT, TO(0),
        KC_J,           KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_H,                               KC_R,           KC_K,           KC_TRANSPARENT, KC_T,           KC_F5,          KC_TRANSPARENT,
        KC_O,           KC_1,           KC_2,           KC_3,           KC_COMMA,       KC_DOT,                             KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_ESCAPE,      KC_Y,           KC_I,           KC_G,           KC_LEFT_SHIFT,  LGUI(KC_G),                         KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LAYER14] = LAYOUT(
        KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
        KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_I,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_I,           KC_LEFT_CTRL,   KC_TRANSPARENT, KC_R,           MO(15),         KC_SPACE,                           KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
                                                        KC_NO,          KC_NO,          KC_NO,            KC_NO,          KC_NO,          QK_BOOT
    ),

  [_LAYER15] = LAYOUT(
        KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_0,           KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                              KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT
    ),

};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_SHIFT);
        tap_code16(KC_LEFT_SHIFT);
        tap_code16(KC_LEFT_SHIFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_SHIFT);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_SHIFT); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_SHIFT); register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_HOLD: layer_on(10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_SHIFT); register_code16(KC_LEFT_SHIFT);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_SHIFT); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_SHIFT); break;
              case DOUBLE_HOLD: 
                layer_off(10);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_SHIFT); break;
    }
    dance_state[0].step = 0;
}

void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_CTRL);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_HOLD: layer_on(11); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
              case DOUBLE_HOLD: 
                layer_off(11);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_R)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_O)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_L)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_I)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_Z)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_V)))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_V)))SS_DELAY(100)  SS_TAP(X_M));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_M)))SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_X)))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_X)))SS_DELAY(100)  SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_E))));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_S)))SS_DELAY(100)  SS_TAP(X_V));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_S)))SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_M)))SS_DELAY(100)  SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_M)))SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_M)))SS_DELAY(100)  SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_Z))SS_DELAY(100)  SS_LSFT(SS_TAP(X_Z)));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_Z))SS_DELAY(100)  SS_LSFT(SS_TAP(X_Q)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_SPACE));
        } else {
          unregister_code16(LALT(KC_SPACE));
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          layer_off(4);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          layer_on(_LOWER);
        } else {
          layer_off(_LOWER);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }
      } else {
        if (record->event.pressed) {
          layer_on(_RAISE);
        } else {
          layer_off(_RAISE);
        }  
      }  
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    // Note: ADJUST layer functionality removed as requested
    return state;
}
