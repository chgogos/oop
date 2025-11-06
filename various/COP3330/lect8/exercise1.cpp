#include <iostream>
#include <string>
using namespace std;

class Student {
 private:
  string name;
  int age;
  double grade;

 public:
  Student() : name("Unknown"), age(18), grade(0.0) {}
  Student(const string& n, int a) : name(n), age(a), grade(0.0) {}
  Student(const string& n, int a, double g) : name(n), age(a), grade(g) {}

  friend ostream& operator<<(ostream& os, const Student& s) {
    os << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade;
    return os;
  }
};

int main() {
  Student students[3] = {Student(), Student("Nikos", 20),
                         Student("Maria", 22, 8.7)};
  cout << "Students information:\n";
  for (int i = 0; i < 3; i++) cout << students[i] << endl;
  return 0;
}
