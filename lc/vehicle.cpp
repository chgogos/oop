#include <iostream>
#include <ostream>

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

    virtual double traffic_tax() = 0; // pure virtual function (abstract class)
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
    double traffic_tax()
    {
        if (max_weight <= 3000.0)
        {
            return 300.0;
        }
        else if (max_weight <= 6000)
        {
            return 400.0;
        }
        else
        {
            return 600.0;
        }
    }
    friend ostream &operator<<(ostream &o, const truck &x)
    {
        o << x.registration_number << " - "
          << x.owner_name << " - "
          << x.cc << " - "
          << x.max_weight;
        return o;
    }
};

class car : public vehicle
{
private:
    int number_of_doors;

public:
    car(string rn, string on, double c, int nod) : vehicle(rn, on, c), number_of_doors(nod)
    {
        cout << "Car constructed at memory address: " << this << endl;
    }
    double traffic_tax()
    {
        if (cc <= 1000.0)
        {
            return 140.0;
        }
        else
        {
            return 140.0 + (int)((cc - 1000.0) / 100.0) * 10.0;
        }
    }
    friend ostream &operator<<(ostream &o, const car &x)
    {
        o << x.registration_number << " - "
          << x.owner_name << " - "
          << x.cc << " - "
          << x.number_of_doors;
        return o;
    }
};

double total_tax(vehicle* v[5])
{
    double sum =0.0;
    for(int i=0;i<5;i++){
        sum += v[i]->traffic_tax();
    }
    return sum;
}

int main()
{
    truck t("1452235", "Petros", 3000.0, 3500.0);
    car c("52267341", "Maria", 1612.0, 5);
    car c2("52367316", "Kostas", 1412.0, 5);
    car c3("51363146", "Ioanna", 1012.0, 5);
    car c4("51367316", "Christos", 600.0, 4);

    cout << t.traffic_tax() << endl;
    cout << c.traffic_tax() << endl;
    cout << c2.traffic_tax() << endl;
    cout << c3.traffic_tax() << endl;
    cout << c4.traffic_tax() << endl;

    vehicle* a[]={&t, &c, &c2, &c3, &c4};
    double total =  total_tax(a);
    cout << "TOTAL " << total << endl;

}