#include <iostream>
#include <string>
#include <vector>

/** 
 * Αν δεν υπάρχει ο deep copy constructor τότε ένας παίκτης (Player) και ένας άλλος παίκτης που έχει 
 * δημιουργηθεί με copy constructor από τον πρώτο θα μοιράζονται το ίδιο vector νικών (victories) 
 * δηλαδή αν οι νίκες του ενός αλλάζουν, θα αλλάζουν οι νίκες και του άλλου. Επιπλέον θα 
 * δημιουργηθούν προβλήματα και με τον destructor που θα ελευθερώνει πολλαπλές φορές τον χώρο 
 * που θα έχει δεσμευθεί 1 μόνο φορά. Παρόμοια προβλήματα θα παρουσαστούν και στο copy assignment.
 * */
class Player
{
private:
    std::string name;
    std::vector<int> *victories;

public:
    // default constructor
    Player() : name("noname"), victories(nullptr)
    {
        std::cout << "Default constructor called" << std::endl;
    }

    // constructor που αρχικοποιεί το όνομα του παίκτη και δημιουργεί δυναμικά ένα νέο διάνυσμα ακεραίων για τις νίκες
    Player(std::string n) : name(n), victories(new std::vector<int>())
    {
        std::cout << "Constructor Player(string) called" << std::endl;
    }

    // copy constructor (deep)
    Player(const Player &p) : name(p.name), victories(new std::vector<int>())
    {
        for (int v : *(p.victories))
        {
            victories->push_back(v);
        }
        std::cout << "Copy Constructor Player(const Player&) called" << std::endl;
    }

    // copy assignment (deep)
    Player &operator=(const Player &p)
    {
        victories = new std::vector<int>();
        name = p.name;
        for (int v : *(p.victories))
        {
            victories->push_back(v);
        }
        std::cout << "Copy assignment called" << std::endl;
        return *this;
    }

    // destructor
    ~Player()
    {
        delete victories;
        std::cout << "Destructor ~Player() called" << std::endl;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    void add_victory(int x)
    {
        victories->push_back(x);
    }

    void print()
    {
        std::cout << name << " ";
        for (int v : *victories)
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
    Player p2(p1); // κλήση του copy constructor
    p2.set_name("Luigi");
    p2.add_victory(20);
    Player p3; // κλήση του default constructor
    p3 = p2;   // κλήση του copy assignment
    p3.set_name("Bowser");
    p3.add_victory(17);
    p1.print();
    p2.print();
    p3.print();
}