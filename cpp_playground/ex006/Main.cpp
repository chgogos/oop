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
    s1.say("Hello");

    std::cout << "Object example: Student2" << std::endl;
    Student *s2=new Student("Adam", "Smith", 20);
    s2->print_info();
    s2->say("Hi");
    delete s2;

    return 0;
}

/*
Object example: Person1
Calling Person() constructor 0x7ffeeecbf780
John Doe
Object example: Person2
Calling Person(string, string) constructor 0x7ffeeecbf738
Jane Doe
Object example: Student1
Calling Person() constructor 0x7ffeeecbf6d0
Calling Student() constructor 0x7ffeeecbf6d0
John Doe
Hello
Object example: Student2
Calling Person(string, string, int) constructor 0x7fe804402a40
Calling Student(string, string, int) constructor 0x7fe804402a40
Adam Smith
Hi
Calling ~Student() destructor 0x7fe804402a40
Calling ~Person() destructor 0x7fe804402a40
Calling ~Student() destructor 0x7ffeeecbf6d0
Calling ~Person() destructor 0x7ffeeecbf6d0
Calling ~Person() destructor 0x7ffeeecbf738
Calling ~Person() destructor 0x7ffeeecbf780
*/