#pragma once

#define NUM_BUTTONS 36 // 33 buttons + undefined + invalid + nobutton

extern char buttonLabel[NUM_BUTTONS][12];

extern unsigned int codes1[NUM_BUTTONS];

extern unsigned int codes2[NUM_BUTTONS];

enum Button 
{ 
    Call, 
    HangUp, 
    Yellow, 
    Red,
    Up,
    Left,
    Ok,
    Right,
    Down,
    Blue,
    Green,
    Home,
    VolUp,
    VolDown,
    Mute,
    Camera,
    ZoomIn,
    ZoomOut,
    ScreenSel,
    Input,
    Command,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Star,
    Zero, 
    Hash,

    Undefined,
    Invalid,
    NoButton
};