#pragma once
#define SPLIT_USB_DETECT // needed because slave half wont work without it

// Vial Support
#define VIAL_KEYBOARD_UID \
    { 0x05, 0xCD, 0x9F, 0x8A, 0xF4, 0xDF, 0xDE, 0xB2 }

// The four corners
#define VIAL_UNLOCK_COMBO_ROWS \
    { 1, 5, 3, 8 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0, 0, 0 }

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
