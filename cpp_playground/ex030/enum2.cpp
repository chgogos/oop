#include <iostream>
#include <string>

// enumerations της C++
enum class Animal
{
    cat,
    dog,
    donkey,
    monkey
};

const std::string dog = "Alf"; // ok

int main()
{
    Animal x = Animal::monkey; // ok

    // σφάλμα: δεν επιτρέπεται η αρχικοποίηση μεταβλητής τύπου int με τιμή τύπου Animal 
    int y = Animal::monkey; // error: cannot initialize a variable of type 'int' with an rvalue of type 'Animal'

    return 0;
}