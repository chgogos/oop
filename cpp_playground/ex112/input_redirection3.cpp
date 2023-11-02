
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string name;
  int grade;
};

bool compare(Student a, Student b) { return a.name < b.name; }

int main() {
  vector<Student> students;

  std::ifstream file("data.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); // save old buf
  std::cin.rdbuf(file.rdbuf());              // redirect std::cin to data.txt

  for (int i = 0; i < 5; i++) {
    Student s;
    cin >> s.name >> s.grade;
    students.push_back(s);
  }

  sort(students.begin(), students.end(), compare);

  for (int i = 0; i < 5; i++) {
    cout << students[i].name << " " << students[i].grade << endl;
  }

  std::cin.rdbuf(cinbuf); // restore std::cin's original buffer
  file.close();

  return 0;
}
