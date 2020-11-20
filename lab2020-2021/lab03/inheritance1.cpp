// Ιεραρχία κλάσεων: Student ISA person
// Η δεσμευμένη λέξη virtual

#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Calling Person(string, int) constructor " << this << endl;
    };

    virtual void say(string msg)
    {
        cout << "The person says: " << msg << std::endl;
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
    void say(string msg)
    {
        cout << "The student says: " << msg << endl;
    }
};

int main()
{
    cout << "1." << endl;
    Person p1("Jane", 21);
    p1.say("Hi");

    cout << "2." << endl;
    Student p2("John", 20, 1);
    p2.say("Hi");

    cout << "3." << endl;
    Person &p3 = p2; // αναφορά προς ήδη υπάρχον αντικείμενο
    p3.say("Hi");

    cout << "4." << endl;
    Person *p4 = new Student("Peter", 22, 7);
    p4->say("Hi");

    cout << "5." << endl;
    Person* array[]={&p1, &p2, p4};
    for(auto p: array){
        p->say("Hello");
    }

    delete p4;
}

/*
1.
Calling Person(string, int) constructor 0x7afc30
The person says: Hi
Calling Person(string, int) constructor 0x7afc00
Calling Student(string, int, int) constructor 0x7afc00
The student says: Hi
3.
The student says: Hi
4.
Calling Person(string, int) constructor 0xd82450
Calling Student(string, int, int) constructor 0xd82450
The student says: Hi
5.
The person says: Hello
The student says: Hello
The student says: Hello
*/