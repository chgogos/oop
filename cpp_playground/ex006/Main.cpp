#include "Person.h"
#include "Student.h"

int main() {
    std::cout << "Object example: Person1" << std::endl;
    Person p1;
    p1.print_info();

    std::cout << "Object example: Person2" << std::endl;
    Person p2("Jane","Doe");
    p2.print_info();

    std::cout << "Object example: Student1" << std::endl;
    Student s1;
    s1.print_info();
    s1.say("I want to say something");

    std::cout << "Object example: Student2" << std::endl;
    Student *s2=new Student("Adam", "Smith", 20);
    s2->print_info();
    s2->say("Hi");
    delete s2;

    return 0;
}
