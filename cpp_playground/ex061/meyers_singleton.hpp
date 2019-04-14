#pragma once

class singleton
{
private:
    int counter = 0;
    singleton() = default;
    singleton(singleton &) = delete;
    singleton &operator=(const singleton &) = delete;

public:
    static singleton &get_instance()
    {
        static singleton instance;
        return instance;
    }

    void increment(const int &x){
        counter += x;
    }
    void  print();
    void fun1();
    void fun2();
    void fun3();
};