#include <iostream>

// tight coupling example
class Lamp
{
  public:
    void on()
    {
        std::cout << "Lamp is on" << std::endl;
    }
    void off()
    {
        std::cout << "Lamp is off" << std::endl;
    }
};

class Switch
{
  private:
    Lamp &lamp;
    bool state{false}; // αρκική κατάσταση συσκευής

  public:
    Switch(Lamp &lamp) : lamp(lamp)
    {
    }
    void toggle()
    {
        if (state)
        {
            state = false;
            lamp.off();
        }
        else
        {
            state = true;
            lamp.on();
        }
    }
};

int main()
{
    Lamp a_lamp;
    Switch a_switch(a_lamp);
    a_switch.toggle();
    a_switch.toggle();
    
    return 0;
}


/*
Lamp is on
Lamp is off
*/