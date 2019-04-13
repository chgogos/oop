#pragma once

class singleton
{
private:
    singleton() = default;
    singleton(singleton &) = delete;
    singleton &operator=(const singleton &) = delete;

public:
    static singleton &get_instance()
    {
        static singleton instance;
        return instance;
    }

    void fun1();
    void fun2();
    void fun3();
};