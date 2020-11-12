#include <string>
#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Calling Person(string, int) constructor " << this << endl;
    };

    void modify_age(int x){
        age += x;
    }
    virtual void say(string msg)
    {
        cout << "The person (" << age << ") says: " << msg << std::endl;
    }
};

class Student : public Person
{
    int semester;

public:
    Student(string n, int a, int s) : Person(n, a), semester(s)
    {
        cout << "Calling Student(string, int, int) constructor " << this << endl;
    }
    void say(string msg) // override
    {
        cout << "The student (" << age << ") says: " << msg << endl;
    }
};

int main()
{
    Person p1("Jane", 21);
    p1.say("Hi");
    p1.modify_age(1);
    p1.say("Hi");

    Student p2("John", 20, 1);
    p2.modify_age(1);
    p2.say("Hi");
}