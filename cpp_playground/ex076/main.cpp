#include <iostream>

#include "company.hpp"
#include "employee.hpp"

int main() {
  employee e1("Nikos");
  employee e2("Maria");
  employee e3("Petros");
  employee e4("Sofia");

  company c1("COMPANY A");
  c1.hire(&e1, 1200.0);
  c1.hire(&e2, 1300.0);
  c1.hire(&e3, 1000.0);
  c1.hire(&e4, 1100.0);

  c1.work_force();
  std::cout << "Payroll: " << c1.payroll() << std::endl;

  c1.fire(&e2);
  c1.modify_salary(&e1, 100);

  c1.work_force();
  std::cout << "Payroll: " << c1.payroll() << std::endl;
}