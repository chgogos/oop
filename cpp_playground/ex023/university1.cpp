#include <iostream>

// abstract class
class Student
{
protected:
  std::string name;
  std::string *courses;

public:
  Student(std::string n, int noc) : name(n), courses(new std::string[noc])
  {
    std::cout << "Student(string) constructor called for " << name << std::endl;
  }

  virtual ~Student()
  {
    std::cout << "~Student() destructor called for " << name << std::endl;
    delete[] courses;
  }
  // pure virtual function
  virtual void grade() = 0;
};

class GraduateStudent : public Student
{
private:
  double gpa;

public:
  GraduateStudent(std::string n, double g) : Student(n, 50), gpa(g)
  {
    std::cout << "GraduateStudent(string, double) constructor called for " << name << std::endl;
  }
  ~GraduateStudent()
  {
    std::cout << "~GraduateStudent() destructor called for " << name << std::endl;
  }
  void grade()
  {
    std::cout << "Compute grade of graduate student " << name << std::endl;
  }
};

class PostGraduateStudent : public Student
{
private:
  std::string diploma;

public:
  PostGraduateStudent(std::string n, std::string d) : Student(n, 10), diploma(d)
  {
    std::cout << "PostGraduateStudent(string, string) constructor called for " << name << std::endl;
  }
  ~PostGraduateStudent()
  {
    std::cout << "~PostGraduateStudent() destructor called for " << name << std::endl;
  }
  void grade()
  {
    std::cout << "Compute grade of postgraduate student " << name << std::endl;
  }
};

int main()
{
  GraduateStudent gs1{"nikos", 19.5}, gs2{"maria", 12.3}, gs3{"petros", 13.4};
  Student *p1 = new GraduateStudent("christos", 17.1);
  PostGraduateStudent pgs1{"aristea", "mathematics"}, pgs2{"george", "physics"};
  Student *p2 = new PostGraduateStudent("katerina", "computer science");

  Student *students[] = {&gs1, &gs2, &gs3, &pgs1, &pgs2, p1, p2};
  for (int i = 0; i < sizeof(students) / sizeof(Student *); i++)
  {
      students[i]->grade();
  }
  delete p1;
  delete p2;

  return 0;
}