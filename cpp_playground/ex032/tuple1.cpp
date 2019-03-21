#include <iostream>
#include <tuple>

int main()
{
    std::tuple<std::string, std::string, unsigned int> a_student;
    a_student = std::make_tuple("Maria", "Nikolaou", 5);

    std::cout << std::get<0>(a_student) << std::endl;
    std::cout << std::get<1>(a_student) << std::endl;
    std::cout << std::get<2>(a_student) << std::endl;

    return 0;
}