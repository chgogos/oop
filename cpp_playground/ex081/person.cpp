#include "libs.hpp"
#include "address.hpp"
#include "person.hpp"

using namespace std;

Person::Person(int age, string name) : age(age), name(name)
{
    address = nullptr;
}

Person::Person(int age, string name, string street, string city, string postal_code) : Person(age, name)
{
    if (address != nullptr)
        delete address;
    address = new Address(street, city, postal_code);
}

Person::Person(const Person &p) : name(p.name), age(p.age)
{
    auto* a = p.address;
    address = new Address(a->street, a->city, a->postal_code);
}

Person::~Person()
{
    delete address;
    address = nullptr;
}

void Person::display_info()
{
    cout << "name: " << name << " age: " << age;
    if (address != nullptr)
        cout << " street: " << address->street << " city: " << address->city << " postal code: " << address->postal_code;
    cout << endl;
}
