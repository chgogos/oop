#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age) : name(name), age(age) {}
    void info()
    {
        cout << name << " " << age << endl;
    }
    void age_a_year()
    {
        age++;
    }
};

// κλήση με τιμή (pass by value)
void funv(person a)
{
    a.age++;
}

// κλήση με αναφορά (pass by reference)
void funr(person &a)
{
    a.age++;
}

// πέρασμα με αναφορά χρησιμοποιώντας δείκτη
void funp(person *a)
{
    a->age++;
    // (*a).age++; // εναλλακτικά
}

int main()
{
    person p1("Nikos", 42);

    funv(p1);
    p1.info(); // Nikos 42

    funr(p1);
    p1.info(); // Nikos 43

    funp(&p1);
    p1.info(); // Nikos 44

    p1.age_a_year();
    p1.info(); // Nikos 45

    person *p2 = new person("Maria", 42);
    funv(*p2);
    p2->info(); // Maria 42

    funr(*p2);
    p2->info(); // Maria 43

    funp(p2);
    p2->info(); // Maria 44

    p2->age_a_year();
    p2->info(); // Maria 45

    delete p2;
}