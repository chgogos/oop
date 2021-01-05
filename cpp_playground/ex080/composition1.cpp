// HAS-A relationship (composition)

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
    B b; // composition (strong containment)
public:
    A()
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
    A obj1;
    A obj2;

    return 0;
}

/*
Object of class B at memory 0x7afc74 having size 400 created
Object of class A at memory 0x7afc70 having size 404 created
Object of class B at memory 0x7afad4 having size 400 created
Object of class A at memory 0x7afad0 having size 404 created
Object of class A at memory 0x7afad0 having size 404 destroyed
Object of class B at memory 0x7afad4 having size 400 destroyed
Object of class A at memory 0x7afc70 having size 404 destroyed
Object of class B at memory 0x7afc74 having size 400 destroyed
*/
