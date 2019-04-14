#include <iostream>

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
    int choice;
    std::cout << "what kind of service object to you want (1 or 2): ";
    std::cin >> choice;
    if (choice == 1)
    {
        my_class1 obj;
        adapter1 an_adapter(obj);
        tester a_tester(an_adapter);
        a_tester.test();
    }
    else
    {
        my_class2 obj;
        adapter2 an_adapter(obj);
        tester a_tester(an_adapter);
        a_tester.test();
    }

    return 0;
}
