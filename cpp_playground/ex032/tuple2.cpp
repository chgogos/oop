#include <iostream>
#include <tuple>

// typedef std::tuple<std::string, std::string, unsigned int> Student;

using Student = std::tuple<std::string, std::string, unsigned int>;


int main()
{
    Student a_student;
    a_student = std::make_tuple("Maria", "Nikolaou", 5);

    std::cout << std::get<0>(a_student) << std::endl;
    std::cout << std::get<1>(a_student) << std::endl;
    std::cout << std::get<2>(a_student) << std::endl;

    return 0;
}
