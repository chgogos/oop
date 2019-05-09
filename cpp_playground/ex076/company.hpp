#pragma once
#include <vector>
#include "employee.hpp"

class company{
    private:
        std::string title;
        std::vector<employee*> employees;
    public:
        company(std::string t) : title(t) {}
        std::string get_title();
        std::vector<employee*> get_employees();
        void hire(employee* emp, double salary);
        void fire(employee* emp);
        void modify_salary(employee* emp, double amount);
        void work_force();
        double payroll();
};