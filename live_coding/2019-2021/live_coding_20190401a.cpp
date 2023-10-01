// tight coupling example

#include <iostream>

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

class Fan
{
  public:
    void on()
    {
        std::cout << "Fan is on" << std::endl;
    }
    void off()
    {
        std::cout << "Fan is off" << std::endl;
    }
};

class Radiator
{
  public:
    void on()
    {
        std::cout << "Radiator is on" << std::endl;
    }
    void off()
    {
        std::cout << "Radiator is off" << std::endl;
    }
};

enum class device
{
    lamp,
    fan,
    radiator
};

class Switch
{
  private:
    Lamp lamp;
    Fan fan;
    Radiator radiator;
    enum device device_type;

    bool state{false}; // αρκική κατάσταση συσκευής

  public:
    Switch(Lamp &lamp) : lamp(lamp)
    {
        device_type = device::lamp;
    }
    Switch(Fan &fan) : fan(fan)
    {
        device_type = device::fan;
    }
    Switch(Radiator &radiator) : radiator(radiator)
    {
        device_type = device::radiator;
    }

    void toggle()
    {
        if (device_type == device::lamp)
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
        else if (device_type == device::fan)
        {
            if (state)
            {
                state = false;
                fan.off();
            }
            else
            {
                state = true;
                fan.on();
            } 
        }
        else if (device_type == device::radiator)
        {
            if (state)
            {
                state = false;
                radiator.off();
            }
            else
            {
                state = true;
                radiator.on();
            } 
        }

    }
};

int main()
{
    Lamp a_lamp;
    Switch switch1(a_lamp);
    switch1.toggle();
    switch1.toggle();

    Fan a_fan;
    Switch switch2(a_fan);
    switch2.toggle();
    switch2.toggle();

    Radiator a_radiator;
    Switch switch3(a_radiator);
    switch3.toggle();
    switch3.toggle();

    return 0;
}