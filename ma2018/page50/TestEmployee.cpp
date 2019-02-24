#include "Employee.h"

void foo(const Employee &e)
{
    e.display(); // OK. display() is a const member function
    // e.fire();    // ERROR. fire() is not a const member function
}
int main()
{
    Employee emp;
    emp.setFirstName("Robert");
    emp.setLastName("Black");
    emp.setId(1);
    emp.setSalary(1000);
    emp.hire();
    emp.display();
    foo(emp);
    return 0;
}