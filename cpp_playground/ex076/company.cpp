#include <iostream>
#include "company.hpp"

std::vector<employee*> company::get_employees()
{
    return employees;
}

std::string company::get_title()
{
    return title;
}

void company::hire(employee *emp, double salary)
{
    emp->set_salary(salary);
    employees.push_back(emp);
}

void company::fire(employee* emp)
{
    int pos = -1;
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i]->get_name() == emp->get_name())
        {
            pos = i;
        }
    }
    employees.erase(employees.begin() + pos);
}

void company::modify_salary(employee* emp, double amount)
{
    emp->set_salary(emp->get_salary() + amount);
}

void company::work_force()
{
    for (auto emp : employees)
    {
        std::cout << emp->get_name() << " " << emp->get_salary() << std::endl;
    }
}

double company::payroll()
{
    double sum = 0.0;
    for (auto e : employees)
    {
        sum += e->get_salary();
    }
    return sum;
}
