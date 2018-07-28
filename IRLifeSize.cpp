#include "IRLifeSize.h"

IRLifeSize::IRLifeSize(int irPin)
{
    irrecv = new IRrecv(irPin);
}



IRLifeSize::~IRLifeSize()
{
    delete irrecv;
}

IRLifeSize::IRLifeSize(IRLifeSize & copyFrom)
{
    irrecv = copyFrom.irrecv;
}

char* IRLifeSize::getButtonLabel(Button button)
{
    int buttonIndex = (int)button;
    return buttonLabel[buttonIndex];
}

Button IRLifeSize::checkForButton()
{
    decode_results results;
    if (irrecv->decode(&results))
    {
        unsigned int code = decodeIR(&results);
        Button button = getButton(code);
        irrecv->resume();
        return button;
    }
    return NoButton;
}

void IRLifeSize::enable()
{
    irrecv->enableIRIn();
}

Button IRLifeSize::getButton(unsigned int code)
{
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        if (code == codes1[i] || code == codes2[i])
        {
            return Button(i);
        }
    }
    return Undefined;
}

unsigned int IRLifeSize::decodeIR(decode_results * results)
{
    byte result[16];

    for (int k = 0; k < 16; k++)
    {
        result[k] = 0;
    }

    if (results->rawlen != 36)
    {
        return (int)codes1[Invalid];
    }


    int bit_index = 0;

    // pulse 0 is time since last pulse
    // pulse 1 and 2 are start
    // last pulse is stop
    // we only look at even pulses
    int len = results->rawlen - 1;
    for (int i = 3; i < len; i = i + 2)
    {
        // current pulse
        unsigned long  x = results->rawbuf[i] * USECPERTICK;
        // next pulse
        unsigned long  n = results->rawbuf[i + 1] * USECPERTICK;

        // timing
        if (x >= 1000 && x <= 2000)
        {
            // low, check next pulse
            if (n >= 2000 && n < 3000)
            {
                // next pulse is long, got a 1
                result[bit_index] = 1;
            }
            else if (n < 1000)
            {
                result[bit_index] = 0;
            }
        }
        bit_index++;
    }

    unsigned int value = 0;
    for (int j = 0; j < 16; j++)
    {
        // print value in binary
        value |= result[j] << (15 - j);
    }
    return value;
}
