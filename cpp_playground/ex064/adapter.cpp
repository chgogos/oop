/*
Adapter

Convert the interface of a class into another interface clients expect. 
Aadapter lets classes work together that couldn't because of incompatible interfaces

*/

#include <iostream>

// οι κλάσεις my_class1 και my_class2 υλοποιούν με διαφορετικό τρόπο 2 λειτουργίες
// που επιθυμούμε να προσφέρονται με ενιαίο τρόπο προς την κλάση tester

class my_class1
{
public:
    void fun1()
    {
        std::cout << "my_class1::fun1" << std::endl;
    }
    void fun2()
    {
        std::cout << "my_class1::fun2" << std::endl;
    }
};

class my_class2
{
public:
    void function1()
    {
        std::cout << "my_class1::function1" << std::endl;
    }
    void function2()
    {
        std::cout << "my_class1::function2" << std::endl;
    }
};

// η κλάση my_adapter ορίζει το επιθυμητό interface 
class my_adapter
{
public:
    virtual void do_thing_a() = 0;
    virtual void do_thing_b() = 0;
};

class adapter1 : public my_adapter
{
private:
    my_class1 &r;

public:
    adapter1(my_class1 &x) : r(x) {}
    virtual void do_thing_a() { r.fun1(); };
    virtual void do_thing_b() { r.fun2(); };
};

class adapter2 : public my_adapter
{
private:
    my_class2 &r;

public:
    adapter2(my_class2 &x) : r(x) {}
    virtual void do_thing_a() { r.function1(); };
    virtual void do_thing_b() { r.function2(); };
};

class tester
{
private:
    my_adapter &adapter_to_service;

public:
    tester(my_adapter &a) : adapter_to_service(a) {}

    void test()
    {
        adapter_to_service.do_thing_a();
        adapter_to_service.do_thing_b();
    }
};

int main()
{
    my_class1 obj1;
    adapter1 an_adapter(obj1);
    tester tester1(an_adapter);
    tester1.test();

    my_class2 obj2;
    adapter2 an_adapter2(obj2);
    tester a_tester2(an_adapter2);
    a_tester2.test();

    return 0;
}
