#include <iostream>

class MyClass {
    public:
        MyClass(){
            std::cout << "Constructor MyClass() called" << std::endl;
        }
        ~MyClass(){
            std::cout << "Destructor ~MyClass() called" << std::endl;
        }
};


class Base {
    public:
        Base(){
            std::cout << "Constructor Base() called" << std::endl;
        }
        ~Base(){
            std::cout << "Destructor ~Base() called" << std::endl;
        }
};

class Derived : Base {
    private:
        MyClass c;
    public:
        Derived(){
            std::cout << "Constructor Derived() called" << std::endl;
        }
        ~Derived(){
            std::cout << "Destructor ~Derived() called" << std::endl;
        }
};

int main(){
    Derived obj;
    // Constructor Base() called
    // Constructor MyClass() called
    // Constructor Derived() called
    // Destructor ~Derived() called
    // Destructor ~MyClass() called
    // Destructor ~Base() called

    return 0;
}
