#pragma once
#include <string>

class employee {
 private:
  std::string name;
  double salary;

 public:
  employee(std::string n) : name(n), salary(0) {}
  std::string get_name();
  double get_salary();
  void set_salary(double);
};