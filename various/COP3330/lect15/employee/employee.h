// ----------EMPLOYEE.H----------
// Declarations for class Employee and its
// derived classes.  Class Employee has two directly
// derived subclasses, Temporary (employees who work on
// an hourly basis and get no company benefits) and Permanent.
// Permanent employees (all of whom have a benefit deduction)
// are further subdivided into Hourly and Salaried classes.

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

class Employee // the information common to all employees
{
public:
    virtual void PrintCheck() = 0; // a pure virtual function

protected: // accessible to derived classes only
    float netPay;
    Employee();                                              // default constructor
    Employee(const char *n, const char *a, const char *ssn); // constructor with parameters
    char name[30];
    char address[80];
    char socSecNumber[12];
};

class Temporary : public Employee
{
public: // Public so that they can be invoked from main()
    Temporary(const char *n, const char *a, const char *ssn, float hw, float hr);
    Temporary();
    void PrintCheck();

private:               // Temporary is an Employee with ...
    float hoursWorked; //   a number of hours worked, and
    float hourlyRate;  //   an hourly rate of pay
};

class Permanent : public Employee
{
    // This is public so that it can be initialized externally
public:                            // Permanent is an Employee with ...
    static float benefitDeduction; // a fixed deduction for benefits

    // All is protected so that it is only accessible to derived classes
protected:
    Permanent(const char *n, const char *a, const char *ssn);
    Permanent();
    void PrintCheck() = 0; // redeclared as pure virtual
};

class Hourly : public Permanent
{
public: // These must be public so that we can use them in main()
    Hourly(const char *n, const char *a, const char *ssn, float hw, float hr);
    Hourly();
    void PrintCheck();

private:               // Hourly is a Permanent with ...
    float hoursWorked; //   a number of hours worked, and
    float hourlyRate;  //   an hourly rate
};

class Salaried : public Permanent
{
public: // These must be public so that we can use them in main()
    Salaried(const char *n, const char *a, const char *ssn, float wp);
    Salaried();
    void PrintCheck();

private:             // Salaried is a Permanent with ...
    float weeklyPay; //   a weekly salary
};

#endif
