#include <iostream>

class Person
{
private:
  std::string name;
  int age;

public:
  Person() = default;
  Person(std::string n, int a) : name(n), age(a) {}

  // helper function
  std::ostream &print(std::ostream &os) const
  {
    return os << "Name: " << name << " age: " << age;
  }

  // helper function
  std::istream &input(std::istream &is)
  {
    return is >> name >> age;
  }
};

// υπερφόρτωση τελεστή << για τα αντικείμενα Person με χρήση helper συνάρτησης
std::ostream &operator<<(std::ostream &os, const Person &p)
{
  return p.print(os);
}
// υπερφόρτωση τελεστή >> για τα αντικείμενα Person με χρήση helper συνάρτησης
std::istream &operator>>(std::istream &is, Person &p)
{
  return p.input(is);
}

int main()
{
  Person p1("Nikos", 30);
  std::cout << p1 << std::endl;

  Person p2;
  std::cout << "Enter a persons' name and age: ";
  std::cin >> p2;
  std::cout << p2 << std::endl;
}
