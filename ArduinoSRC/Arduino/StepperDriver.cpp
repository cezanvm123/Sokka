#include "StepperDriver.h"


HomingButton::HomingButton()
{

}

void HomingButton::setPin(unsigned int p)
{
    pin = p;
}

bool HomingButton::isPressed()
{

}


Stepper::Stepper()
{
    homed = false;
}

void Stepper::setPins(unsigned int sP, unsigned int dP, unsigned int eP)
{
    stepPin = sP;
    dirPin = dP;
    enablePin = eP;
}

// dir = 0 : antiClockwise
// dir = 1 : clockwise
void Stepper::step(int dir)
{
    digitalWrite(dirPin, dir);

    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
}

void Stepper::enable(bool isEnabled)
{
    digitalWrite(enablePin, !isEnabled);
}

void Stepper::steps(int steps, unsigned int time)
{

}

bool Stepper::buttonPressed()
{
    return  button.isPressed();
}