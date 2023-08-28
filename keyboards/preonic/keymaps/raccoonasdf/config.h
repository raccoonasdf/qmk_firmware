#pragma once

#define USB_POLLING_INTERVAL_MS 1

// certain stinky programs dont register the modtap enter unless you slow it down
#define TAP_CODE_DELAY 20

#define RGBLIGHT_DEFAULT_HUE 180

// startup song doesn't work anymore unless i set this?
#define AUDIO_INIT_DELAY

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(Q__NOTE(_D4), Q__NOTE(_D4), Q__NOTE(_D5), Q__NOTE(_REST), Q__NOTE(_A4))
#endif

#define MUSIC_MASK (keycode != KC_NO)
