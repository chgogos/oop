#include <iostream>

using namespace std;

class vehicle  // abstract
{
protected:
    string registration_number;
    string owner_name;
    double cc;
public:
    vehicle(string r_n, string o_n, double _cc) : registration_number(r_n), owner_name(o_n), cc(_cc) {}
    virtual double traffic_tax() = 0; // pure virtual function
};

class car : public vehicle
{
private:
    int number_of_doors;
public:
    car(string r_n, string o_n, double _cc, int nod) : vehicle(r_n, o_n, _cc), number_of_doors(nod) {}
    double traffic_tax() {
        if (cc<=1000.0)
            return 140.0;
        else 
            return 140.0 + (int)((cc-1000.0)/100.0) * 10.0;
    }
};

class truck : public vehicle
{
private:
    double max_weight;
public:
    truck(string r_n, string o_n, double _cc, double m_w) : vehicle(r_n, o_n, _cc), max_weight(m_w) {}
    double traffic_tax() {
        return 0.0;
    }
};

int main()
{
    car c("234", "maria", 1205.0, 5);
    cout << c.traffic_tax() << endl;
    truck t("345", "giorgos", 4500.0, 2000.0);
    cout << t.traffic_tax() << endl;
}