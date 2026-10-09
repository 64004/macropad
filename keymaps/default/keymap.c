#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_7,    KC_8,    KC_9,    KC_ASTR, KC_PMNS,
        KC_4,    KC_5,    KC_6,    KC_MINS, KC_PPLS,
        KC_1,    KC_2,    KC_3,    KC_PLUS, KC_PENT,
        KC_MUTE, KC_0,    KC_DOT,  KC_ENT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_WH_D, KC_WH_U),
        ENCODER_CCW_CW(KC_LEFT, KC_RGHT)
    }
};
#endif
