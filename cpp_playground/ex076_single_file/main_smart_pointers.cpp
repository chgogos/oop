#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class Employee {
 private:
  string name;
  double salary;

 public:
  Employee(const string& n) : name(n), salary(0) {}

  string getName() const { return name; }

  double getSalary() const { return salary; }

  void setSalary(double sal) { salary = sal; }
};

class Company {
 private:
  string title;
  vector<shared_ptr<Employee>> employees;

 public:
  Company(const string& t) : title(t) {}

  string getTitle() const { return title; }

  const vector<shared_ptr<Employee>>& getEmployees() const { return employees; }

  void hire(const shared_ptr<Employee>& emp, double salary) {
    emp->setSalary(salary);
    employees.push_back(emp);
  }

  void fire(const shared_ptr<Employee>& emp) {
    employees.erase(remove_if(employees.begin(), employees.end(),
                              [&](const shared_ptr<Employee>& e) {
                                return e->getName() == emp->getName();
                              }),
                    employees.end());
  }

  void modifySalary(const shared_ptr<Employee>& emp, double amount) {
    emp->setSalary(emp->getSalary() + amount);
  }

  void workForce() const {
    for (const auto& emp : employees) {
      cout << emp->getName() << " " << emp->getSalary() << endl;
    }
  }

  double payroll() const {
    double sum = 0.0;
    for (const auto& emp : employees) {
      sum += emp->getSalary();
    }
    return sum;
  }
};

int main() {
  auto e1 = make_shared<Employee>("Nikos");
  auto e2 = make_shared<Employee>("Maria");
  auto e3 = make_shared<Employee>("Petros");
  auto e4 = make_shared<Employee>("Sofia");

  Company c1("COMPANY A");
  c1.hire(e1, 1200.0);
  c1.hire(e2, 1300.0);
  c1.hire(e3, 1000.0);
  c1.hire(e4, 1100.0);

  c1.workForce();
  cout << "Payroll: " << c1.payroll() << endl;

  c1.fire(e2);
  c1.modifySalary(e1, 100);

  c1.workForce();
  cout << "Payroll: " << c1.payroll() << endl;

  return 0;
}
