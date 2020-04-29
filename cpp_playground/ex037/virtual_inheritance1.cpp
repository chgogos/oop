#include <iostream>
#include <ostream>

class Person
{
  protected:
    std::string name;

  public:
    Person(std::string n) : name(n)
    {
        std::cout << "Person(string) constructor called" << std::endl;
    }
};

class Teacher : public Person
{
  protected:
    std::string specialty;

  public:
    Teacher(std::string name, std::string specialty) : Person(name), specialty(specialty)
    {
        std::cout << "Teacher(string, string) constructor called" << std::endl;
    }
};

class Student : public Person
{
  protected:
    int semester;

  public:
    Student(std::string name, int semester) : Person(name), semester(semester)
    {
        std::cout << "Student(string, int) constructor called" << std::endl;
    }
};

class TeachingAssistant : public Teacher, public Student
{
  private:
    bool payed;

  public:
    TeachingAssistant(std::string name, std::string specialty, int semester, bool p) : Teacher(name, specialty), Student(name, 1), payed(p)
    {
        std::cout << "TeachingAssistant(string, string, int) constructor called" << std::endl;
    }
    friend std::ostream &operator<<(std::ostream &os, const TeachingAssistant &ta)
    {
        // os << ta.name << " ";  // error: member found by ambiguous name lookup
        os << "semester: " <<ta.semester << " specialty: " << ta.specialty << " " << (ta.payed ? "PAYED" : "NOT PAYED");
        return os;
    }
};

int main()
{
    // πρόβλημα: ο constructor της Person καλείται δύο φορές
    TeachingAssistant ta("petros", "programming", 6, true);
    std::cout << ta << " [size of object = " << sizeof(ta) << " bytes]" << std::endl;
    return 0;
}

/*
Person(string) constructor called
Teacher(string, string) constructor called
Person(string) constructor called
Student(string, int) constructor called
TeachingAssistant(string, string, int) constructor called
semester: 1 specialty: programming PAYED [size of object = 80 bytes]
*/