#include <iostream>

// declaration
int fun(int a, int b);





// definition
int fun(int a, int b)
{
    return a + b;
}

// entry point
int main()
{
    std::cout << fun(2, 3) << std::endl;
}


