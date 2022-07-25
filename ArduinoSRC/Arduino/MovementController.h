#ifndef MOVEMENTCONTROLLER
#define MOVEMENTCONTROLLER

#include "StepperDriver.h"
#include "Arduino.h"

class MovementController 
{
    // for each stepper
    //      - do a step
    //      - check if button pressed 
public:

    MovementController();
    ~MovementController() {};

    void setMicroStepPins(unsigned int ms1, unsigned int ms2, unsigned int ms3);

    void setStepperPins(unsigned int s1, unsigned int s2, unsigned int s3, unsigned int s4, 
                        unsigned int e1, unsigned int e2, unsigned int e3, unsigned int e4, 
                        unsigned int d1, unsigned int d2, unsigned int d3, unsigned int d4);
    void setButtonPins(unsigned int s1, unsigned int s2, unsigned int s3, unsigned int s4);

    void homeSteppers();

    void moveTo(unsigned int x, unsigned int y);

private:
    void tensioning();
    void preciseHoming(); 

    void enableStepper(int s);
    void enableAllSteppers();
    void disableStepper(int s);
    void disableAllSteppers();

    Stepper steppers[4];
    unsigned int ms1Pin;
    unsigned int ms2Pin;
    unsigned int ms3Pin;

};

#endif