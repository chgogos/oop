#include <iostream>

using namespace std;

class vehicle
{
protected:
    string registration_number;
    string owner_name;
    double cc;

public:
    vehicle(string rn, string on, double c) : registration_number(rn), owner_name(on), cc(c)
    {
        cout << "Vehicle constructed at memory address: " << this << endl;
    }
};

class truck : public vehicle
{
private:
    double max_weight;

public:
    truck(string rn, string on, double c, double mw) : vehicle(rn, on, c), max_weight(mw)
    {
        cout << "Truck constructed at memory address: " << this << endl;
    }
};

class car : public vehicle
{
private:
    int number_of_doors;
};

int main()
{
    vehicle v("12334626", "Nikos", 1400);
    truck t("1452235", "Petros", 3000, 3500);
}