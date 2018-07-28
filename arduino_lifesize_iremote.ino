#include "IRLifeSize.h"

#define RECEIVER_PIN 6
IRLifeSize irlifesize(RECEIVER_PIN);

void setup()
{
    Serial.begin(9600);
    irlifesize.enable();
}

void loop()
{
    Button button = irlifesize.checkForButton();
    if (button != NoButton)
    {
        char* label = irlifesize.getButtonLabel(button);
        Serial.println(label);
    }
}
