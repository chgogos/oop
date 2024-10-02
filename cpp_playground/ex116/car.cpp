#include <iostream>
#include <string>
#include <iomanip>

class Car {
public:
    std::string make;
    std::string model;
    int year;
    float fuel_level;

    void set_car_details(const std::string& new_make, const std::string& new_model, int new_year) {
        make = new_make;
        model = new_model;
        year = new_year;
        std::cout << "Car details set: " << make << " " << model << " (" << year << ")" << std::endl;
    }

    void add_fuel(float amount) {
        if (amount > 0 && fuel_level + amount <= 50.0) {
            fuel_level += amount;
            std::cout << "Added " << amount << " liters of fuel. New fuel level: " 
                      << fuel_level << " liters" << std::endl;
        } else {
            std::cout << "Invalid fuel amount or tank capacity exceeded." << std::endl;
        }
    }

    void drive(float distance_kms) {
        // Assuming fuel consumption of 10 km per liter
        float fuel_consumed = distance_kms / 10.0;
        
        if (fuel_consumed <= fuel_level) {
            fuel_level -= fuel_consumed;
            std::cout << "Drove " << distance_kms << " km. Remaining fuel: " 
                      << fuel_level << " liters" << std::endl;
        } else {
            float distance_possible = fuel_level * 10.0;
            fuel_level = 0.0;
            std::cout << "Not enough fuel to drive " << distance_kms << " km. Drove " 
                      << distance_possible << " km and ran out of fuel." << std::endl;
        }
    }

    void display_info() const {
        std::cout << "Car: " << make << " " << model << " " << year 
                  << " fuel = " << std::fixed << std::setprecision(2) << fuel_level << std::endl;
    }
};

int main() {
    Car my_car;
    my_car.fuel_level = 0.0;  // Initialize fuel level
    my_car.set_car_details("Toyota", "Corolla", 2022);
    my_car.add_fuel(40);
    my_car.drive(2000);
    my_car.display_info();

    return 0;
}