#pragma once

#define USB_POLLING_INTERVAL_MS 1

#define TAP_CODE_DELAY 2

#define RGBLIGHT_DEFAULT_HUE 180

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(Q__NOTE(_D4), Q__NOTE(_D4), Q__NOTE(_D5), Q__NOTE(_REST), Q__NOTE(_A4))
#endif

#define MUSIC_MASK (keycode != KC_NO)
