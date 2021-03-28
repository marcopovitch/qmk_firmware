#pragma once

//#ifdef AUDIO_ENABLE
//#define STARTUP_SONG SONG(PLANCK_SOUND)
//#endif

//#define MIDI_BASIC

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
//#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 200

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

//#define FIRMWARE_VERSION u8"n9pPG/EMoZD"
#define RGB_MATRIX_STARTUP_SPD 10
