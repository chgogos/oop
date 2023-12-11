#include <iostream>
#include <vector>

using namespace std;

class vehicle
{
protected:
    int year;
    double price;

public:
    vehicle(int y, double p) : year(y), price(p) {}
    virtual void info() = 0;
};

class car : public vehicle
{
protected:
    double cc;

public:
    car(int y, double p, double c) : vehicle(y, p), cc(c) {}

    void info()
    {
        cout << "year: " << year << " price:" << price << " cc:" << cc << endl;
    }
};

class sports_car : public car
{
private:
    double hp;

public:
    sports_car(int y, double p, double c, double h) : car(y, p, c), hp(h) {}
    void info()
    {
        cout << "year: " << year << " price:" << price << " cc:" << cc << " hp:" << hp <<endl;
    }
};

int main()
{
    vector<vehicle *> vehicles;
    vehicles.push_back(new car(1993, 20980., 1766.7));
    vehicles.push_back(new car(2010, 17221., 1200.0));
    vehicles.push_back(new sports_car(2017, 30100., 1998.5, 190.2));
    for (int i = 0; i < vehicles.size(); i++)
    {
        vehicles[i]->info();
    } 
}