#include <string>
#include <vector>

using namespace std;

class employee
{
private:
    string name;
    double salary;

public:
    employee(string n);
    string get_name();
    double get_salary();
    void set_salary(double);
};

class company
{
private:
    string title;
    vector<employee *> employees;

public:
    company(std::string t) : title(t) {}
    string get_title();
    vector<employee *> get_employees();
    void hire(employee *emp, double salary);
    void fire(employee *emp);
    void modify_salary(employee *emp, double amount);
    void work_force();
    double payroll();
};

int main(){
    
}