#include <iostream>

class Person
{
    protected:
        std::string name;
    public:
        Person() = default;
        Person(std::string n) : name(n) {
            std::cout << "Constructor Person called" << std::endl;
        }
        void say(std::string t)
        {
            std::cout << t << std::endl;
        }
};

class Student : public Person 
{
    private:
        int semester;
    public:
        Student(std::string n, int s) : Person(n), semester(s) {
            std::cout << "Constructor Student called" << std::endl;
        }
        void party(){
            semester=1;
            name = "kiki";
            std::cout << "PARTY" << std::endl;
        }

        void info(){
            std::cout << name << " " << this->semester << std::endl;
        }
};

int main(){
    Student obj1("maria", 5);
    obj1.say("hello");
    obj1.party();
    obj1.info();

    Person obj2;
    obj2.say("hi");
    // obj2.party();
}