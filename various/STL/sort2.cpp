#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class Employee
{

public:
    string name;
    double salary;
    Employee(string n, double s) : name(n), salary(s) {}
    friend ostream &operator<<(ostream &os, const Employee &emp)
    {
        os << emp.name << " " << emp.salary << " euro";
        return os;
    }
};
void print_employees(vector<Employee> v)
{
    for (auto emp : v)
    {
        cout << emp << endl;
    }
}

int main()
{
    vector<Employee> v{
        {"John", 900},
        {"Maria", 1000},
        {"Anna", 1000},
        {"Chris", 1000},
        {"Kostas", 1000},
        {"Aris", 2000},
        {"Bill", 2000},
        {"George", 1000},
        {"Panayiotis", 1000},
        {"Petros", 2500},
    };

    auto comp = [](Employee emp1, Employee emp2) { return emp1.salary < emp2.salary; };

    cout << "highest payed: " << *(max_element(begin(v), end(v), comp)) << endl;
    cout << "lowest payed: " << *(min_element(begin(v), end(v), comp)) << endl;
    cout << endl;

    cout << "\nSORT BY SALARY" << endl;
    // non-stable sort
    sort(begin(v), end(v), [](Employee emp1, Employee emp2) { return emp1.salary < emp2.salary; });
    print_employees(v);
    cout << "highest payed: " << *(end(v) - 1) << endl;
    cout << "lowest payed: " << *begin(v) << endl;

    // stable_sort(begin(v), end(v), [](Employee emp1, Employee emp2) { return emp1.salary < emp2.salary; });
    // print_employees(v);

    cout << "\nSORT BY NAME" << endl;
    // το πρώτο αντικείμενο που δεν είναι μικρότερο από ότι περνάμε ως παράμετρο
    sort(begin(v), end(v), [](Employee emp1, Employee emp2) { return emp1.name < emp2.name; });
    print_employees(v);
    cout << "\nSearch for Chris (upper_bound)" << endl;
    auto p = lower_bound(begin(v), end(v), "Chris", [](Employee emp, string name) { return emp.name < name; });
    if (p != end(v))
    {
        cout << *p << endl;
        p++;
        cout << *p << endl;
    }
    cout << "\nSearch for Chris (lower_bound)" << endl;
    p = upper_bound(begin(v), end(v), "Chris", [](string name, Employee emp) { return emp.name > name; });
    if (p != begin(v))
    {
        cout << *p << endl;
        p--;
        cout << *p << endl;
    }
}

/*
highest payed: Petros 2500 euro
lowest payed: John 900 euro


SORT BY SALARY
John 900 euro
Maria 1000 euro
Anna 1000 euro
Chris 1000 euro
Kostas 1000 euro
Panayiotis 1000 euro
George 1000 euro
Bill 2000 euro
Aris 2000 euro
Petros 2500 euro
highest payed: Petros 2500 euro
lowest payed: John 900 euro

SORT BY NAME
Anna 1000 euro
Aris 2000 euro
Bill 2000 euro
Chris 1000 euro
George 1000 euro
John 900 euro
Kostas 1000 euro
Maria 1000 euro
Panayiotis 1000 euro
Petros 2500 euro

Search for Chris (upper_bound)
Chris 1000 euro
George 1000 euro

Search for Chris (lower_bound)
George 1000 euro
Chris 1000 euro
*/