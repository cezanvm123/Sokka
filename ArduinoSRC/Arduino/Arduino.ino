#include "MovementController.h"
void setup()
{
    Serial.begin(9600);
    Serial.println("Test");

    MovementController mov = MovementController();
    
    mov.moveTo(1,2);
}

void loop()
{

}
