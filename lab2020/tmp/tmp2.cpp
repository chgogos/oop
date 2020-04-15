// Άσκηση 3 live codeing 15/4/2020

#include <iostream>

using namespace std;

class vehicle // abstract
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
    double traffic_tax()
    {
        if (cc <= 1000.0)
            return 140.0;
        else
            return 140.0 + (int)((cc - 1000.0) / 100.0) * 10.0;
    }
    friend ostream &operator<<(ostream &os, const car &a_car)
    {
        os << a_car.registration_number << " " << a_car.owner_name << " " << a_car.cc << " " << a_car.number_of_doors;
        return os;
    }
};

class truck : public vehicle
{
private:
    double max_weight;

public:
    truck(string r_n, string o_n, double _cc, double m_w) : vehicle(r_n, o_n, _cc), max_weight(m_w) {}
    double traffic_tax()
    {
        if (max_weight <= 3000.0)
            return 300.0;
        else if (max_weight <= 6000.0)
            return 400.0;
        else
            return 600.0;
    }
    friend ostream &operator<<(ostream &os, const truck &a_truck)
    {
        os << a_truck.registration_number << " " << a_truck.owner_name << " " << a_truck.cc << " " << a_truck.max_weight;
        return os;
    }
};

double total_tax(vehicle *v[5])
{
    double sum = 0.0;
    for (int i = 0; i < 5; i++){
        sum += v[i]->traffic_tax();
    }
    return sum;
}

int main()
{
    car c("234", "maria", 1205.0, 5);
    cout << c << " pays " << c.traffic_tax() << endl;
    truck t("345", "giorgos", 4500.0, 2000.0);
    cout << t << " pays " << t.traffic_tax() << endl;

    car c1("111", "kiki", 1405.0, 5);
    car c2("222", "giannis", 1905.0, 5);
    car c3("333", "petros", 805.0, 4);

    vehicle *a[5];
    a[0]=&c;
    a[1]=&t;
    a[2]=&c1;
    a[3]=&c2;
    a[4]=&c3;
    cout << "TOTAL TAX=" << total_tax(a) << endl;

}