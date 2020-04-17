#include <iostream>

using namespace std;

class Student
{
public:
    void PrintReport();
};

void Student::PrintReport()
{
    cout << "This is a general student report.\n";
}

class Grad
{
public:
    void PrintReport(); /* overrides Student::PrintReport */
};

void Grad::PrintReport()
{
    cout << "This is a graduate student report.\n";
}

class UGrad
{
public:
    void PrintReport(); /* overrides Student::PrintReport */
};

void UGrad::PrintReport()
{
    cout << "This is an undergraduate student report.\n";
}

int main()
{
    Student S;
    Grad G;
    UGrad UG;

    S.PrintReport();
    G.PrintReport();
    UG.PrintReport();

    return 0;
}

/*
This is a general student report.
This is a graduate student report.
This is an undergraduate student report.
*/