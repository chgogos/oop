#include <iostream>

class vehicle
{
protected:
    std::string registration_number;
    std::string owner_name;
    double cc;

public:
    vehicle(std::string rn, std::string on, double cc) : registration_number(rn), owner_name(on), cc(cc) {}
    virtual double traffic_tax() = 0;
};

class car : public vehicle
{
private:
    int number_of_doors;

public:
    car(std::string rn, std::string on, double cc, int nod) : vehicle(rn, on, cc), number_of_doors(nod) {}
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

    friend std::ostream &operator<<(std::ostream &os, const car &a_car)
    {
        os << a_car.registration_number << "-"
           << a_car.owner_name << "-"
           << a_car.cc << "-"
           << a_car.number_of_doors;
        return os;
    }
};

class truck : public vehicle
{
private:
    double max_weight;

public:
    truck(std::string rn, std::string on, double cc, double mw) : vehicle(rn, on, cc), max_weight(mw) {}
    double traffic_tax()
    {
        if (max_weight <= 3000.0)
        {
            return 300.0;
        }
        else if (max_weight <= 6000.0)
        {
            return 400.0;
        }
        else
        {
            return 600.0;
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const truck &a_truck)
    {
        os << a_truck.registration_number << "-"
           << a_truck.owner_name << "-"
           << a_truck.cc << "-"
           << a_truck.max_weight;
        return os;
    }
};

double total_tax(vehicle *v[5])
{
    double sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        sum += v[i]->traffic_tax();
    }
    return sum;
}

int main()
{
    vehicle *a[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Input type of vehicle (car=1/truck=2): ";
        int t;
        std::cin >> t;
        if (t == 1)
        {
            std::string rn, on;
            double cc;
            int nod;
            std::cout << "Enter registration number, owner name, cubic centimeters, number of doors: ";
            std::cin >> rn >> on >> cc >> nod;
            a[i] = new car(rn, on, cc, nod);
        }
        else
        {
            std::string rn, on;
            double cc, mw;
            std::cout << "Enter registration number, owner name, cubic centimeters, maximum weight: ";
            std::cin >> rn >> on >> cc >> mw;
            a[i] = new truck(rn, on, cc, mw);
        }
    }

    std::cout << "\nTOTAL TAX " << total_tax(a) << std::endl;

    return 0;
}
