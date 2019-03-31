#include <iostream>

// loose coupling example
class Switchable
{
  public:
    virtual void on() = 0;
    virtual void off() = 0;
};

class Lamp : public Switchable
{
  public:
    void on() override
    {
        std::cout << "Lamp is on" << std::endl;
    }
    void off() override
    {
        std::cout << "Lamp is off" << std::endl;
    }
};

class Fan : public Switchable
{
  public:
    void on() override
    {
        std::cout << "Fan is on" << std::endl;
    }
    void off() override
    {
        std::cout << "Fan is off" << std::endl;
    }
};

class Radiator : public Switchable
{
  public:
    void on() override
    {
        std::cout << "Radiator is on" << std::endl;
    }
    void off() override
    {
        std::cout << "Radiator is off" << std::endl;
    }
};

class Switch
{
  private:
    Switchable &switchable;
    bool state{false}; // αρκική κατάσταση συσκευής

  public:
    Switch(Switchable &switchable) : switchable(switchable)
    {
    }
    void toggle()
    {
        if (state)
        {
            state = false;
            switchable.off();
        }
        else
        {
            state = true;
            switchable.on();
        }
    }
};

int main()
{
    Lamp a_lamp;
    Fan a_fan;
    Radiator a_radiator;

    Switch switch1(a_lamp);
    Switch switch2(a_fan);
    Switch switch3(a_radiator);
    switch1.toggle();switch1.toggle();
    switch2.toggle();switch2.toggle();
    switch3.toggle();switch3.toggle();
    return 0;
}
