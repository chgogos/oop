// ISA relationship

#include <iostream>

class Base
{
public:
    void virtual test()
    {
        std::cout << "Base::test" << std::endl;
    }
};

class Derived : public Base
{
public:
    void test() override
    {
        Base::test(); //κλήση της συνάρτησης test() όπως έχει οριστεί στην υπερκλάση Base
        std::cout << "Derived::test" << std::endl;
    }
    void test2()
    {
        std::cout << "Derived::test2" << std::endl;
    }
};

// συνάρτηση που δέχεται ως παράμετρο αναφορές τύπου Base (άρα και Derived)
void func1(Base &x)
{
    std::cout << "func1: do something" << std::endl;
    x.test();
}

// συνάρτηση που δέχεται ως παράμετρο αναφορές τύπου Derived (δεν δέχεται αναφορές τύπου Base)
void func2(Derived &x)
{
    std::cout << "func2: do something" << std::endl;
    x.test();
}

int main()
{
    Base base_obj;
    Derived derived_obj;

    std::cout << "CHECKPOINT 1" << std::endl;
    func1(base_obj); // ok
    std::cout << "CHECKPOINT 2" << std::endl;
    func1(derived_obj); // ok (derived_obj is a base_obj)

    std::cout << "CHECKPOINT 3" << std::endl;
    func2(derived_obj); // ok
    // func2(base_obj);    // not ok (base_obj IS NOT a derived_obj)

    std::cout << "CHECKPOINT 4" << std::endl;
    Base *p = new Derived();
    p->test(); // ok

    std::cout << "CHECKPOINT 4" << std::endl;
    // p->test2();  // not ok
    ((Derived *)p)->test2(); // ok

    std::cout << "CHECKPOINT 5" << std::endl;
    (dynamic_cast<Derived *>(p))->test2(); // ok

    return 0;
}
