#include <stdio.h>
#include <string.h>

char make[50] = "";
char model[50] = "";
int year = 0;
float fuel_level = 0.0;

void set_car_details(const char* new_make, const char* new_model, int new_year) {
    strcpy(make, new_make);
    strcpy(model, new_model);
    year = new_year;
    printf("Car details set: %s %s (%d)\n", make, model, year);
}

void add_fuel(float amount) {
    if (amount > 0 && fuel_level + amount <= 50.0) {
        fuel_level += amount;
        printf("Added %.2f liters of fuel. New fuel level: %.2f liters\n", amount, fuel_level);
    } else {
        printf("Invalid fuel amount or tank capacity exceeded.\n");
    }
}

void drive(float distance_kms) {
    float fuel_consumed = distance_kms / 10.0; // κατανάλωση 10 χλμ ανά λίτρο
    if (fuel_consumed <= fuel_level) {
        fuel_level -= fuel_consumed;
        printf("Drove %.2f km. Remaining fuel: %.2f liters\n", distance_kms, fuel_level);
    } else {
        float distance_possible = fuel_level * 10.0;
        fuel_level = 0.0;
        printf("Not enough fuel to drive %.2f km. Drove %.2f km and ran out of fuel.\n", 
               distance_kms, distance_possible);
    }
}

int main() {
    set_car_details("Toyota", "Corolla", 2022);
    add_fuel(40);
    drive(2000); 
    printf("Car: %s %s %d fuel = %.2f\n", make, model, year, fuel_level);
    return 0;
}