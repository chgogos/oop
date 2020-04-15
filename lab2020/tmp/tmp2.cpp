#include <iostream>

using namespace std;

class vehicle
{
protected:
    string registration_number;
    string owner_name;
    double cc;
public:
    vehicle(string r_n, string o_n, double _cc) : registration_number(r_n), owner_name(o_n), cc(_cc) {}
};

class car : public vehicle
{
private:
    int number_of_doors;
public:
    car(string r_n, string o_n, double _cc, int nod) : vehicle(r_n, o_n, _cc), number_of_doors(nod) {}
};

class truck : public vehicle
{
private:
    double max_weight;
public:
    truck(string r_n, string o_n, double _cc, double m_w) : vehicle(r_n, o_n, _cc), max_weight(m_w) {}
};

int main()
{
    vehicle v("123", "nikos", 1600.0);
    car c("234", "maria", 1200.0, 5);
    truck t("345", "giorgos", 4500.0, 2000.0);
}