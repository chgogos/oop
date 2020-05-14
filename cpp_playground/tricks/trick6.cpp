#include <iostream>

int a = 42;

int &fun()
{
    return a;
}

int main()
{
    // function return value is an rvalue
    fun() = 43;
    std::cout << a << std::endl;
    return 0;
}


/*
43
*/