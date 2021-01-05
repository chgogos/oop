// HAS-A relationship - aggregation using references

#include <iostream>

class B
{
private:
    int data[100];

public:
    B()
    {
        std::cout << "Object of class B at memory " << this << " having size " << sizeof(*this) << " created" << std::endl;
    }
    ~B()
    {
        std::cout << "Object of class B at memory " << this << " having size " << sizeof(*this) << " destroyed" << std::endl;
    }
};

class A
{
private:
    int x;
    B &b; // aggregation (weak containment)
public:
    A(B &rb) : b(rb)
    {
        std::cout << "Object of class A at memory " << this << " having size " << sizeof(*this) << " created" << std::endl;
    }
    ~A()
    {
        std::cout << "Object of class A at memory " << this << " having size " << sizeof(*this) << " destroyed" << std::endl;
    }
};

int main()
{
    B b_obj;
    A obj1(b_obj);
    A obj2(b_obj);

    return 0;
}

/*
Object of class B at memory 0x7afc80 having size 400 created  
Object of class A at memory 0x7afc70 having size 16 created   
Object of class A at memory 0x7afc60 having size 16 created   
Object of class A at memory 0x7afc60 having size 16 destroyed 
Object of class A at memory 0x7afc70 having size 16 destroyed 
Object of class B at memory 0x7afc80 having size 400 destroyed
*/