#include <iostream>
#include <string>

class Employee
{
public:
    std::string m_name{};
    int m_id{};
    double m_wage{};

    // Print employee information to the screen
    void print()
    {
        std::cout << "Name: " << m_name << "  Id: " << m_id << "  Wage: $" << m_wage << '\n';
    }
};

int main()
{
    // Declare two employees
    Employee alex{"Alex", 1, 25.00};
    Employee joe{"Joe", 2, 22.25};

    // Print out the employee information
    alex.print();
    joe.print();

    return 0;
}