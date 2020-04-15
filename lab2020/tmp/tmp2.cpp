#include <iostream>

using namespace std;

class vehicle
{
protected:
    string registration_number;
    string owner_name;
    double cc;
};

class car : public vehicle
{
private:
    int number_of_doors;
};

class truck : public vehicle
{
private:
    double max_weight;
};

int main()
{
    vehicle v;
    car c;
    truck t;
}