#include "Person.h"
#include <iostream>

void Person::print_info(){
    std::cout << firstName << " " << lastName << std::endl;
}

void Person::say(std::string msg){
    std::cout << msg << std::endl;
}
