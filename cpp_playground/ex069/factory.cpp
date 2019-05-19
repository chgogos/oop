#include <iostream>
#include <vector>

enum class vehicle_type
{
    CAR,
    MOTORCYCLE
};

class vehicle
{
public:
    virtual ~vehicle() {}
    virtual void print_info() = 0;
};

class car : public vehicle
{

public:
    car()
    {
        std::cout << "a new car created" << std::endl;
    }
    ~car()
    {
        std::cout << "car object destroyed" << std::endl;
    }
    void print_info()
    {
        std::cout << "I am a car" << std::endl;
    }
};

class motorcycle : public vehicle
{
public:
    motorcycle()
    {
        std::cout << "a new motorcycle created" << std::endl;
    }
    ~motorcycle()
    {
        std::cout << "motocycle object destroyed" << std::endl;
    }
    void print_info()
    {
        std::cout << "I am a motorcycle" << std::endl;
    }
};

// factory method
vehicle *create_vehicle(vehicle_type vt)
{
    if (vt == vehicle_type::CAR)
    {
        return new car();
    }
    else if (vt == vehicle_type::MOTORCYCLE)
    {
        return new motorcycle();
    }
    else
    {
        return nullptr;
    }
}

// λόγω του factory method δεν χρειάζεται να γίνουν αλλαγές στην κλάση dealer 
// ακόμα και αν προστεθούν νέοι τύποι οχημάτων (π.χ. TRUCK)
class dealer
{
private:
    std::vector<vehicle *> vehicles;

public:
    ~dealer()
    {
        for (auto &v : vehicles)
        {
            delete v;
        }
    }
    void buy_vehicle(vehicle_type vt)
    {
        vehicle *vehicle = create_vehicle(vt);
        vehicles.push_back(vehicle);
    }
    void print_list_of_vehicles()
    {
        for (auto &v : vehicles)
        {
            v->print_info();
        }
    }
};

int main()
{
    dealer a_dealer;
    a_dealer.buy_vehicle(vehicle_type::CAR);
    a_dealer.buy_vehicle(vehicle_type::CAR);
    a_dealer.buy_vehicle(vehicle_type::MOTORCYCLE);
    a_dealer.buy_vehicle(vehicle_type::MOTORCYCLE);

    return 0;
}
