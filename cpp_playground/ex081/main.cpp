#include "libs.hpp"
#include "address.hpp"
#include "person.hpp"

int main()
{
    Person p1{30, "Aristea"};
    Person *p2 = new Person(42, "Chris");
    Person *p3 = new Person(24, "Maria", "Venizelou 7", "Arta", "47100");
    Person p4(*p3); // deep copy since copy constructor exists
    p3->address->city = "Ioannina"; 
    Person p5 = *p3; // copy constructor is called again

    p1.display_info();
    p2->display_info();
    p3->display_info();
    p4.display_info();
    p5.display_info();
    
    delete p2;
    delete p3;
}