/* 
DEPENDENCY INJECTION

Decouple components from their required services in such a way that 
the components do not have to know the names of these services, nor 
how they have to be procured
*/

#include <iostream>

class singleton_di_facility
{
private:
    int counter = 0;

public:
    virtual ~singleton_di_facility() = default;
    virtual void fun1() = 0;
    virtual void fun2() = 0;
    virtual void fun3() = 0;
    void increment(const int &x)
    {
        counter += x;
    }
    void print()
    {
        std::cout << "Current value of counter is " << counter << std::endl;
    }
};

class singleton_di1 : public singleton_di_facility
{
    void fun1()
    {
        std::cout << "Singleton Dependency Injection Class 1 - function 1" << std::endl;
    }
    void fun2()
    {
        std::cout << "Singleton Dependency Injection Class 1 - function 2" << std::endl;
    }
    void fun3()
    {
        std::cout << "Singleton Dependency Injection Class 1 - function 3" << std::endl;
    }
};

class singleton_di2 : public singleton_di_facility
{
    void fun1()
    {
        std::cout << "Singleton Dependency Injection Class 2 - function 1" << std::endl;
    }
    void fun2()
    {
        std::cout << "Singleton Dependency Injection Class 2 - function 2" << std::endl;
    }
    void fun3()
    {
        std::cout << "Singleton Dependency Injection Class 2 - function 3" << std::endl;
    }
};

class my_class1
{
private:
    singleton_di_facility *singleton;

public:
    my_class1(singleton_di_facility *s) : singleton(s) {} // construction injection

    void set_singleton(singleton_di_facility *s) // setter injection
    {
        singleton = s;
    }

    void test()
    {
        std::cout << "my_class1 member function" << std::endl;
        singleton->increment(5);
        singleton->fun1();
        singleton->fun2();
        singleton->fun3();
        singleton->print();
    }
};

class my_class2
{
private:
    singleton_di_facility *singleton;

public:
    my_class2(singleton_di_facility *s) : singleton(s) {} // construction injection

    void set_singleton(singleton_di_facility *s) // setter injection
    {
        singleton = s;
    }

    void another_test()
    {
        std::cout << "my_class2 member function" << std::endl;
        singleton->increment(10);
        singleton->fun1();
        singleton->fun2();
        singleton->fun3();
        singleton->print();
    }
};

int main()
{
    // παράδειγμα 1: χρήση ενός αντικείμενου (singleton1) που γίνεται inject σε 3 αντικείμενα
    // 2 κλάσεων κατά την κατασκευή τους και το οποίο λειτουργεί ως singleton
    singleton_di_facility *singleton1 = new singleton_di1();
    my_class1 obj1(singleton1);
    my_class1 obj2(singleton1);
    my_class2 obj3(singleton1);
    obj1.test();
    obj2.test();
    obj3.another_test();

    // παράδειγμα 2: αλλαγή του αντικειμένου που χρησιμοποιείται ως singleton (singleton1-->singleton2)
    // για τα αντικείμενα των 2 κλάσεων
    singleton_di_facility *singleton2 = new singleton_di2();
    obj1.set_singleton(singleton2);
    obj2.set_singleton(singleton2);
    obj3.set_singleton(singleton2);
    obj3.another_test();

    delete singleton1;
    delete singleton2;
    return 0;
}
