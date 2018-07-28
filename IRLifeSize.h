#pragma once

#include <IRremote.h>
#include "LifeSizeButtons.h"

class IRLifeSize
{
public:
    IRLifeSize(int irPin);
    ~IRLifeSize();
    IRLifeSize(IRLifeSize& copyFrom);
    char* getButtonLabel(Button button);
    Button checkForButton();
    void enable();
    
private:
    IRrecv* irrecv;
    Button getButton(unsigned int code);
    unsigned int decodeIR(decode_results *results);
};

