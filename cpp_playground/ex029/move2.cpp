#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> fun1()
{
    std::vector<std::string> v1(100000, "test");
    std::cout << "Address of v1 is " << &v1 << std::endl;
    return v1;
}

int main()
{
    std::vector<std::string> v2 = fun1();
    std::cout << v2[0] << std::endl;
    std::cout << v2[99999] << std::endl;
    std::cout << "Address of v2 is " << &v2 << std::endl;
    return 0;
}