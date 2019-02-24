#pragma once

#include <string>
#include <iostream>

class Person{
    private:
        std::string firstName;
        std::string lastName;
        int age;
    public:
        Person() : firstName("John"), lastName("Doe") {
            std::cout << "Calling Person() constructor " << this << std::endl;
        };
        Person(std::string fn, std::string ln): firstName(fn), lastName(ln) {
            std::cout << "Calling Person(string, string) constructor " << this << std::endl;
        };
        Person(std::string fn, std::string ln, int a): firstName(fn), lastName(ln), age(a) {
            std::cout << "Calling Person(string, string, int) constructor " << this << std::endl;
        };
        ~Person() {
            std::cout << "Calling ~Person() destructor " <<  this << std::endl;
        };
        void say(std::string);
        void print_info();
};
