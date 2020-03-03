// παράδειγμα με χρήση abstract class, pure virtual function

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class pet
{
protected:
    string _name;

public:
    pet(string name) : _name(name) {}
    virtual string sound() const = 0;
    virtual void make_sound() const
    {
        cout << _name << ": " << sound() << "!\n";
    }
};

class dog : public pet
{
public:
    dog(string name) : pet(name) {}
    string sound() const { return "woof"; }
    void make_sound() const
    {
        pet::make_sound();
        cout << '(' << _name << " wags tail)\n";
    }
};

class cat : public pet
{
public:
    cat(string name) : pet(name) {}
    virtual string sound() const { return "miao"; }
};

// αν η παράμετρος της συνάρτησης δεν είναι reference, και το πέρασμα γίνεται με τιμή, ο compiler δεν επιτρέπει τη μεταγλώττιση
void make_sound_twice(const pet &a_pet)
{
    a_pet.make_sound();
    a_pet.make_sound();
}

int main()
{
    // pet p; // object of abstract class type "pet" is not allowed: -- function "pet::sound" is a pure virtual function
    dog a_dog("Alf");
    cat a_cat("Tom");

    make_sound_twice(a_dog);
    make_sound_twice(a_cat);

    cout << "Vector with pets" << endl;
    vector<pet *> pets;
    pets.push_back(&a_dog);
    pets.push_back(&a_cat);
    for (size_t i = 0; i < pets.size(); i++)
    {
        pets[i]->make_sound();
    }
}
