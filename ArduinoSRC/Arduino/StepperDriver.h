class homingButton 
{
    unsigned int pin; 
};

class Stepper {

    void step();
    void steps(int steps, unsigned int time);

    unsigned int pin;
    bool homed; 
};