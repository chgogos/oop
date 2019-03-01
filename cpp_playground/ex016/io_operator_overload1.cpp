#include <iostream>

class Person
{
  private:
    std::string name;
    int age;

  public:
    Person() = default;
    Person(std::string n, int a) : name(n), age(a) {}

    // υπερφόρτωση τελεστή << για τα αντικείμενα Person μέσω friend συνάρτησης
    friend std::ostream &operator<<(std::ostream &os, const Person &p)
    {
        os << "Name: " << p.name << " age: " << p.age;
        return os;
    }

    // υπερφόρτωση τελεστή >> για τα αντικείμενα Person μέσω friend συνάρτησης
    friend std::istream &operator>>(std::istream &is, Person &p)
    {
        is >> p.name >> p.age;
        return is;
    }
};

int main()
{
    Person p1("Nikos", 30);
    std::cout << p1 << std::endl;

    Person p2;
    std::cout << "Enter a persons' name and age: ";
    std::cin >> p2;
    std::cout << p2 << std::endl;
}
