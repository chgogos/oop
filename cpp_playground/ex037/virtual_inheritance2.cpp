#include <iostream>
#include <ostream>

class Person
{
  protected:
    std::string name;

  public:
    // default constructor
    Person() {
      std::cout << "Person() constructor called" << std::endl;
    }
    Person(std::string n) : name(n)
    {
        std::cout << "Person(string) constructor called" << std::endl;
    }

    // pure virtual function
    virtual void say(std::string s)=0;
};

class Teacher : virtual public Person
{
  protected:
    std::string specialty;

  public:
    Teacher(std::string name, std::string specialty) : Person(name), specialty(specialty)
    {
        std::cout << "Teacher(string, string) constructor called" << std::endl;
    }

    virtual void say(std::string s) 
    { 
      std::cout << "Professor says: " << s << std::endl;
    }
};

class Student : virtual public Person
{
  protected:
    int semester;

  public:
    Student(std::string name, int semester) : Person(name), semester(semester)
    {
        std::cout << "Student(string, int) constructor called" << std::endl;
    }

    virtual void say(std::string s) 
    { 
      std::cout << "Student says: " << s << std::endl;
    }
};

class TeachingAssistant : public Teacher, public Student
{
  private:
    bool payed;

  public:
    // προκειμένου να μην κληθεί αυτόματα ο default constructor της Person, καλείται στο initializer list τελευταίος ο constructor Person(int) 
    TeachingAssistant(std::string name, std::string specialty, int semester, bool p) : Teacher(name, specialty), Student(name, 1), payed(p), Person(name)
    {
        std::cout << "TeachingAssistant(string, string, int) constructor called" << std::endl;
    }

    void say(std::string s) 
    {
      std::cout << "Teaching Assistant says: " << s << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &os, const TeachingAssistant &ta)
    {
        os << "name: " << ta.name << " semester: " << ta.semester << " specialty: " << ta.specialty << " " << (ta.payed ? "PAYED" : "NOT PAYED");
        return os;
    }
};

int main()
{
    // ok: ο constructor της Person καλείται 1 φορά
    TeachingAssistant ta("petros", "programming", 6, true);
    std::cout << ta << " [size of object = " << sizeof(ta) << " bytes]" << std::endl;
    ta.say("Hello");
    Student st("nikos", 1);
    st.say("Hello");
    Teacher te("christos", "algorithms");
    te.say("hello");
    return 0;
}
