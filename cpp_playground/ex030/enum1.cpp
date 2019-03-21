#include <iostream>
#include <string>

// enumerations της C (old enums)
enum Animal
{
    cat,
    dog,
    donkey,
    monkey
};

// σφάλμα: δεν επιτρέπεται ο επαναορισμός συμβόλων που έχουν οριστεί στο enum
const std::string dog = "Alf"; // error: redefinition of 'dog' as different kind of symbol

int main()
{
    Animal x = monkey; // OK
    int y = monkey; // όμως λειτουργεί και αυτό (implicit conversion)

    return 0;
}