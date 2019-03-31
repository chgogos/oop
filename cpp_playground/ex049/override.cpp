#include <iostream>

class Base
{
  public:
    virtual void fun()
    {
        std::cout << "Base::fun" << std::endl;
    }
};

class Derived : public Base
{
  public:
    // αν η συνάρτηση μέλος Base::fun δεν δηλωθεί ως virtual τότε
    // ο μεταγλωττιστής θα εμφανίσει το ακόλουθο μήνυμα
    // error: only virtual member functions can be marked 'override'
    void fun() override
    {
        std::cout << "Derived::fun" << std::endl;
    }
};

int main()
{
    Base *p = new Derived();

    delete p;
    return 0;
}
