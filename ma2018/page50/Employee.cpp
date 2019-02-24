#include "Employee.h"
#include <iostream>

using namespace std;

Employee ::Employee() : mId(-1),
                        mFirstName(""),
                        mLastName(""),
                        mSalary(0),
                        bHired(false)
{
}

void Employee::hire()
{
    bHired = true;
}

void Employee::fire()
{
    bHired = false;
}

string Employee::getFirstName() const
{
    return mFirstName;
}

void Employee::display() const
{
    cout << "Employee: " << getLastName() << ", "
         << getFirstName() << endl;
    cout << "-------------------------" << endl;
    cout << (bHired ? "Current Employee" : "Former Employee") << endl;
    cout << "Employee ID: " << getId() << endl;
    cout << "Salary: " << getSalary() << endl;
    cout << endl;
}