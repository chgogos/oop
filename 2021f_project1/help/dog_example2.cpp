#include <iostream>
#include <string>
#include "dog.hpp"

using namespace std;

int main()
{
    dog d1("Alf", "sleep");
    d1.info();
    d1.set_status("angry");
    d1.info();
    d1.eat();
    d1.info();
}