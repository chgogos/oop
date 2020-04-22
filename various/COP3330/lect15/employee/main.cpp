// Main program to test class Employee
// and its derived classes.

#include <iostream>   // for cin, cout
#include "employee.h" // for Employee classes
#include "utility.h"  // for SetNumeric, WaitForUser, Terminate

using namespace std;

int main()
{
    // Create an array to hold (pointers to) our Employees
    // ** (This array of pointers is statically created.  How would we
    //    create such an array dynamically?)
    Employee *emps[6];

    // Creating checks via intitialized declarations
    // and place them in our array

    // samples of static objects being attached to the array
    cout << "\n\nCreating a temporary employee pay record . . .";
    Temporary t("Clipper Decker", "Clinton, NY", "123456789", 40.0, 5.25);
    emps[0] = &t;

    cout << "\n\nCreating an hourly employee pay record . . .";
    Hourly h("Sparky Hirshfield", "Deansboro, NY", "234567890", 30.5, 8.50);
    emps[1] = &h;

    cout << "\n\nCreating a salaried employee pay record . . .";
    Salaried s("Fenton Sugarman", "Boston, MA", "345678901", 500.00);
    emps[2] = &s;
    WaitForUser();

    // examples of dynamic objects, attached to the array

    cout << "\n\nEnter data for a temporary employee pay record . . .";
    Temporary *tEmp = new Temporary("Bob", "Here", "111-11-1111", 45.0, 15.45);
    emps[3] = tEmp;

    cout << "\n\nEnter data for an hourly employee pay record . . .";
    Hourly *hEmp = new Hourly;
    emps[4] = hEmp;

    cout << "\n\nEnter data for a salaried employee pay record . . .";
    if (cin.peek() == '\n')
        cin.get();
    emps[5] = new Salaried;

    // Set format flags for numeric output
    SetNumeric();

    // Now, print all checks, letting C++ determine the
    // appropriate version of PrintCheck depending upon
    // the type of the Employee
    for (int i = 0; i < 6; i++)
    { //ClearScreen();
        cout << "\n\n\n\n\n\n";

        emps[i]->PrintCheck();

        cout << "\n\n\n";
        WaitForUser();
    };

    Terminate();
    cout << '\n';

    return 0;
};
