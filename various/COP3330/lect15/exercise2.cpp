#include <iostream>
using namespace std;

class Transport {
protected:
    double distance;

public:
    Transport(double d) : distance(d) {}
    virtual double cost() const = 0;
    virtual ~Transport() {}
};

class Taxi : public Transport {
    double base_fare;
    double rate_per_km;

public:
    Taxi(double d, double base, double rate)
        : Transport(d), base_fare(base), rate_per_km(rate) {}

    double cost() const override {
        return base_fare + rate_per_km * distance;
    }
};

class Bus : public Transport {
public:
    Bus(double d) : Transport(d) {}

    double cost() const override {
        return 1.40;
    }
};

class Train : public Transport {
public:
    Train(double d) : Transport(d) {}

    double cost() const override {
        return distance * 0.05 + 2.0;
    }
};

int main() {
    Transport* t[3];
    t[0] = new Taxi(10.0, 3.0, 0.8);   // distance=10 km
    t[1] = new Bus(25.0);              // distance ignored
    t[2] = new Train(50.0);            // distance=50 km

    for (int i = 0; i < 3; ++i) {
        cout << "Cost: " << t[i]->cost() << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete t[i];
    }

    return 0;
}
