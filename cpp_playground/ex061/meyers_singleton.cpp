#include <iostream>
#include "meyers_singleton.hpp"

void singleton::print()
{
    std::cout << "Current value of counter is " << counter << std::endl;
}
void singleton::fun1()
{
    std::cout << "fun1 called" << std::endl;
}
void singleton::fun2()
{
    std::cout << "fun2 called" << std::endl;
}
void singleton::fun3()
{
    std::cout << "fun3 called" << std::endl;
}
