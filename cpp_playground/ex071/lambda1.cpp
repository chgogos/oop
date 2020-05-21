#include <iostream>
#include <functional>

int main()
{

    // std::function<int(int, int)> lambda1 = [](double x, double y) { return x * y; };
    auto lambda1 = [](double x, double y) { return x * y; };
    std::cout << "1. " << lambda1(5, 6) << std::endl;

    int a = 10;
    int b = 10;
    auto lambda2 = [a](double x, double y) { return a * x * y; }; // pass by value a
    std::cout << "2. " << lambda2(5, 6) << std::endl;

    auto lambda3 = [=](double x, double y) { return a * b * x * y; }; // pass by value a and b
    std::cout << "3. " << lambda3(5, 6) << std::endl;

    auto lambda4 = [&a](double x, double y) { a*=10;return a * x * y; }; // pass by reference a
    std::cout << "4. " << lambda4(5, 6) << " value of a=" << a << std::endl;

    auto lambda5 = [&](double x, double y) { a*=10; b*=10; return a * b * x * y; }; // pass by reference a and b
    std::cout << "5. " << lambda5(5, 6) << " value of a=" << a << " value of b=" << b << std::endl;

    return 0;
}

/*
1. 30
2. 300
3. 3000
4. 3000 value of a=100
5. 3e+06 value of a=1000 value of b=100
*/