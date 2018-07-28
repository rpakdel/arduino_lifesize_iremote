#include "LifeSizeButtons.h"

char buttonLabel[NUM_BUTTONS][12] = {
    "call",
    "hangup",
    "yellow",
    "red",
    "up",
    "left",
    "ok",
    "right",
    "down",
    "blue",
    "green",
    "home",
    "vol_up",
    "vol_down",
    "mute",
    "camera",
    "zoom_in",
    "zoom_out",
    "screen_sel",
    "input",
    "command",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "*",
    "0",
    "#",

    "Undefined",
    "Invalid",
    "NoButton"
};

unsigned int codes1[NUM_BUTTONS] = {

    0x9891, // call 
    0x9898, // hangup
    0x986E, // yellow
    0x984F, // red
    0x9816, // up
    0x9825, // left
    0x981F, // ok
    0x982A, // right
    0x9819, // down
    0x9857, // blue
    0x9868, // green
    0x9879, // home
    0x98EF, // vol up
    0x98F1, // vol down
    0x98EA, // mute
    0x9840, // camera
    0x9834, // zoom in
    0x983B, // zoom out
    0x987C, // screen sel
    0x9883, // input
    0x9885, // command
    0x98C7, // 1
    0x98CB, // 2
    0x98CD, // 3
    0x98D0, // 4
    0x98D5, // 5
    0x98DA, // 6
    0x98DC, // 7
    0x98E3, // 8
    0x98E5, // 9
    0x982F, // *
    0x98C1, // 0 
    0x9831, // #

    0x0000, // undefined
    0x0001, // invalid
    0x0002  // nobutton
};

unsigned int codes2[NUM_BUTTONS] = {
    0x9892, // call  
    0x989B, // hangup
    0x986D, // yellow
    0x984C, // red
    0x9815, // up
    0x9826, // left
    0x981C, // ok
    0x9829, // right
    0x981A, // down
    0x9854, // blue
    0x986B, // green
    0x987A, // home
    0x98EC, // vol up
    0x98F2, // vol down
    0x98E9, // mute
    0x9843, // camera
    0x9837, // zoom in
    0x9838, // zoom out
    0x987F, // screen sel
    0x9880, // input
    0x9886, // command
    0x98C4, // 1
    0x98C8, // 2
    0x98CE, // 3
    0x98D3, // 4
    0x98D6, // 5
    0x98D9, // 6
    0x98DF, // 7
    0x98E0, // 8
    0x98E6, // 9
    0x982C, // *
    0x98C2, // 0 
    0x9832, // #

    0x0000, // undefined
    0x0001, // invalid
    0x0002  // nobutton
};