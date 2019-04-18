#include <iostream>
#include <functional>

int main()
{

    // std::function<int(int, int)> lambda1 = [](double x, double y) { return x * y; };
    auto lambda1 = [](double x, double y) { return x * y; };
    std::cout << lambda1(5, 6) << std::endl;

    int a = 10;
    int b = 10;
    auto lambda2 = [a](double x, double y) { return a * x * y; };
    std::cout << lambda2(5, 6) << std::endl;

    auto lambda3 = [&a](double x, double y) { a*=10;return a * x * y; };
    std::cout << lambda3(5, 6) << " value of a=" << a << std::endl;

    auto lambda4 = [&](double x, double y) { a*=10; b*=10; return a * b * x * y; };
    std::cout << lambda4(5, 6) << " value of a=" << a << std::endl;

    
    return 0;
}
