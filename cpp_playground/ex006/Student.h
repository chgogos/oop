#pragma once

#include "Person.h"

class Student: public Person {
    public:
        Student(){
            std::cout << "Calling Student() constructor " << this << std::endl;
        };
        Student(std::string fn, std::string ln, int a) :  Person(fn, ln, a) {
            std::cout << "Calling Student(string, string, int) constructor " << this << std::endl;
        }
        ~Student(){
            std::cout << "Calling ~Student() destructor " << this << std::endl;
        };
        
        void test(){
            // firstName = "Chris"; // inaccessible private member (firstName) of parent class (Person)
        }
};
