#include <iostream>

using namespace std;

class car
{
private:
    string model;
    double max_speed;
    double current_speed;

public:
    car(string m, double ms) : model(m), max_speed(ms), current_speed(0.0) {}
    void accelerate(double diff)
    {
        if (current_speed == max_speed && diff > 0)
        {
            cerr << "Invalid acceleration" << endl;
            return;
        }
        if (current_speed == 0.0 && diff < 0)
        {
            cerr << "Invalid deceleration" << endl;
            return;
        }
        if (current_speed + diff > max_speed)
        {
            current_speed = max_speed;
        }
        else if (current_speed + diff < 0.0)
        {
            current_speed = 0.0;
        }
        else
        {
            current_speed += diff;
        }
    }
    void info()
    {
        cout << "Model:" << model << " (" << max_speed << "km/h) current speed = " << current_speed << endl;
    }
};

int main()
{
    car c("Mazda MX-5", 250.);
    c.info();
    for (int t = 0; t < 10; t++)
    {
        c.accelerate(30.);
        c.info();
    }
    cout << "####################" << endl;
    for (int t = 0; t < 10; t++)
    {
        c.accelerate(-50.);
        c.info();
    }
}

/*
Model:Mazda MX-5 (250km/h) current speed = 0
Model:Mazda MX-5 (250km/h) current speed = 30
Model:Mazda MX-5 (250km/h) current speed = 60
Model:Mazda MX-5 (250km/h) current speed = 90
Model:Mazda MX-5 (250km/h) current speed = 120
Model:Mazda MX-5 (250km/h) current speed = 150
Model:Mazda MX-5 (250km/h) current speed = 180
Model:Mazda MX-5 (250km/h) current speed = 210
Model:Mazda MX-5 (250km/h) current speed = 240
Model:Mazda MX-5 (250km/h) current speed = 250
Invalid acceleration
Model:Mazda MX-5 (250km/h) current speed = 250
####################
Model:Mazda MX-5 (250km/h) current speed = 200
Model:Mazda MX-5 (250km/h) current speed = 150
Model:Mazda MX-5 (250km/h) current speed = 100
Model:Mazda MX-5 (250km/h) current speed = 50
Model:Mazda MX-5 (250km/h) current speed = 0
Invalid deceleration
Model:Mazda MX-5 (250km/h) current speed = 0
Invalid deceleration
Model:Mazda MX-5 (250km/h) current speed = 0
Invalid deceleration
Model:Mazda MX-5 (250km/h) current speed = 0
Invalid deceleration
Model:Mazda MX-5 (250km/h) current speed = 0
Invalid deceleration
Model:Mazda MX-5 (250km/h) current speed = 0
*/