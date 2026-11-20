#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a): name(n), age(a){}
        virtual void say(string m){
            cout << "The person sayed: " << m << endl;
        }

};

class Student : public Person {
    private:
        int semester;
    public:
        Student(string n, int a, int s): Person(n,a), semester(s){}
        void say(string msg) {
            cout << "The student sayed " << msg << endl;
        }

};

int main(){
    Person p("Maria", 20);
    Student s("Kostas", 21, 2);
    p.say("Hello");
    s.say("Hi");

    // -----------------------

    Person *persons[3];
    persons[0] = new Person("Christos", 30);
    persons[1] = new Student("Nikos", 25, 8);
    persons[2] = new Student("Aristea", 22, 6);

    for(int i=0;i<3;i++){
        persons[i]->say("Hello all! ");
    }

}