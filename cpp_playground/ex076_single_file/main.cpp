#include <iostream>
#include <vector>

using namespace std;

class employee {
 private:
  string name;
  double salary;

 public:
  employee(string n) : name(n), salary(0) {}
  string get_name() { return name; }
  double get_salary() { return salary; }
  void set_salary(double sal) { salary = sal; }
};

class company {
 private:
  string title;
  vector<employee *> employees;

 public:
  company(string t) : title(t) {}

  string get_title() { return title; }

  vector<employee *> get_employees() { return employees; }

  void hire(employee *emp, double salary) {
    emp->set_salary(salary);
    employees.push_back(emp);
  }

  void fire(employee *emp) {
    int pos = -1;
    for (size_t i = 0; i < employees.size(); i++) {
      if (employees[i]->get_name() == emp->get_name()) {
        pos = i;
      }
    }
    employees.erase(employees.begin() + pos);
  }

  void modify_salary(employee *emp, double amount) {
    emp->set_salary(emp->get_salary() + amount);
  }

  void work_force() {
    for (auto emp : employees) {
      cout << emp->get_name() << " " << emp->get_salary() << endl;
    }
  }

  double payroll() {
    double sum = 0.0;
    for (auto e : employees) {
      sum += e->get_salary();
    }
    return sum;
  }
};

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
  cout << "Payroll: " << c1.payroll() << endl;

  c1.fire(&e2);
  c1.modify_salary(&e1, 100);

  c1.work_force();
  cout << "Payroll: " << c1.payroll() << endl;
}

/*
Nikos 1200
Maria 1300
Petros 1000
Sofia 1100
Payroll: 4600
Nikos 1300
Petros 1000
Sofia 1100
Payroll: 3400
*/