#include "MovementController.h"



MovementController::MovementController()
{
    
}


void MovementController::setStepperPins(unsigned int s1, unsigned int s2, unsigned int s3, unsigned int s4, 
                    unsigned int e1, unsigned int e2, unsigned int e3, unsigned int e4, 
                    unsigned int d1, unsigned int d2, unsigned int d3, unsigned int d4)               
{
    Stepper s1();
    s1.setPins(s1, d1, e1);
    Stepper s2();
    s2.setPins(s2, d2, e2);
    Stepper s3();
    s3.setPins(s3, d3, e3);
    Stepper s4();
    s4.setPins(s4, d4, e4);

    steppers[0] = s1;
    steppers[1] = s2;
    steppers[2] = s3;
    steppers[3] = s4;
}


void MovementController::homeSteppers()
{
    tensioning();
    // home axis 1 
    //  Axis 1 is moving counter clockwise until the button is pressed

    // home axis 2 
    //  Axis 2 is moving counter clockwise until the button is pressed
    //  Axis 1 is stepping 


    // home axis 3 

    // home axis 4
}


void MovementController::tensioning()
{
    disableAllSteppers();
    for(int i = 0; i < 4; i++)
    {
        enableStepper(i);
        while(!steppers[i].buttonPressed())
        {
            steppers[i].step(ANTI_CLOCKWISE);
            delay(10);
        }
        disableStepper(i);
        i = 100; // temporary skip
    }
}



void MovementController::moveTo(unsigned int x, unsigned int y)
{
    Serial.println("Test");
}


