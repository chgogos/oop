#include <iostream>
#include <string>
#include <vector>

// Δείτε το συγκεκριμένο κώδικα (copy_constructor3.cpp) σε σχέση με τον κώδικα (copy_constructor4.cpp)

class Player
{
private:
    std::string name;
    std::vector<int> victories;

public:
    // default constructor
    Player() : name("noname")
    {
        std::cout << "Default constructor called" << std::endl;
    }

    // constructor που αρχικοποιεί το όνομα του παίκτη
    Player(std::string n) : name(n)
    {
        std::cout << "Constructor Player(string) called" << std::endl;
    }

    // destructor
    ~Player()
    {
        std::cout << "Destructor ~Player() called" << std::endl;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    void add_victory(int x)
    {
        victories.push_back(x);
    }

    void print()
    {
        std::cout << name << " ";
        for (int v : victories)
            std::cout << v << " ";
        std::cout << std::endl;
    }
};

int main()
{
    Player p1("Mario"); // κλήση constructor με ένα όρισμα
    p1.add_victory(11);
    p1.add_victory(15);
    p1.add_victory(19);
    Player p2(p1); // κλήση του copy constructor (χρησιμοποιείται η default υλοποίηση που αντιγράφει όλα τα πεδία)
    p2.set_name("Luigi");
    p2.add_victory(20);
    Player p3; // κλήση του default constructor
    p3 = p2;   // κλήση του copy assignment (χρησιμοποιείται η default υλοποίηση που αντιγράφει όλα τα πεδία)
    p3.set_name("Bowser");
    p3.add_victory(17);
    p1.print();
    p2.print();
    p3.print();
}

/*
Constructor Player(string) called
Default constructor called
Mario 11 15 19
Luigi 11 15 19 20
Bowser 11 15 19 20 17
Destructor ~Player() called
Destructor ~Player() called
Destructor ~Player() called
*/