#include <iostream>
using namespace std;

/*
Try this sample with virtual just on Person::Hello(), then virtual just on Student::Hello(),
then virtual just on UGrad::Hello()
*/
class Person
{
public:
    void Hello()
    {
        cout << "Person::Hello()\n";
    }

protected:
    int SS_Num;
};

class Student : public Person
{
public:
    void Hello()
    {
        cout << "Student::Hello()\n";
    }

protected:
    int Student_Num;
};

class UGrad : public Student
{
public:
    virtual void Hello()
    {
        cout << "UGrad::Hello()\n";
    }
};

class Senior : public UGrad
{
public:
    void Hello()
    {
        cout << "Senior::Hello()\n";
    }
};

int main()
{
    Person P1;
    Student S1;
    UGrad U1;
    Senior SE1;

    Person *pptr;
    Student *sptr;
    UGrad *uptr;
    Senior *septr;

    pptr = &P1;
    pptr->Hello();

    pptr = &S1;
    pptr->Hello();

    pptr = &U1;
    pptr->Hello();

    pptr = &SE1;
    pptr->Hello();

    cout << "***********************\n";

    // sptr = &P1; // a value of type "Person *" cannot be assigned to an entity of type "Student *"
    // sptr->Hello();

    sptr = &S1;
    sptr->Hello();

    sptr = &U1;
    sptr->Hello();

    sptr = &SE1;
    sptr->Hello();

    cout << "***********************\n";

    //uptr = &P1;
    //uptr->Hello();

    //uptr = &S1;
    //uptr->Hello();

    uptr = &U1;
    uptr->Hello();

    uptr = &SE1;
    uptr->Hello();

    return 0;
}

/*
Person::Hello()
Person::Hello()
Person::Hello()
Person::Hello()
***********************
Student::Hello()
Student::Hello()
Student::Hello()
***********************
UGrad::Hello()
Senior::Hello()
*/