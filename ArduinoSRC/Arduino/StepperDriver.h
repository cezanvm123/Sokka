
#ifndef STEPPERDRIVER
#define STEPPERDRIVER


#define CLOCKWISE 1
#define ANTI_CLOCKWISE 0

#include "Arduino.h"

class HomingButton 
{
public: 
    HomingButton();
    void setPin(unsigned int pin);
    bool isPressed();
    unsigned int pin; 
};

class Stepper {

public:
    Stepper();
    void setPins(unsigned int sP, unsigned int dP, unsigned int eP);
    
    void enable(bool isEnabled);
    void step(int dir);
    void steps(int steps, unsigned int time);
    
    bool buttonPressed();


private:
    unsigned int stepPin;
    unsigned int dirPin;
    unsigned int enablePin;
    unsigned int stepDelay = 2000;
    bool homed; 
    HomingButton button;
};

#endif