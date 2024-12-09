#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using si = std::pair<std::string, int>;

int main() {
  std::vector<si> students = {
      {"Alice", 85}, {"Bob", 90}, {"Charlie", 78}, {"Diana", 92}, {"Eve", 88}};

  std::cout << "Original list of students and scores:\n";
  for (const auto& student : students) {
    std::cout << student.first << ": " << student.second << "\n";
  }

  std::sort(students.begin(), students.end(), [](const si& a, const si& b) {
    return a.second > b.second;  // Compare by scores
  });

  std::cout << "\nSorted list (by score descending):\n";
  for (const auto& student : students) {
    std::cout << student.first << ": " << student.second << "\n";
  }

  auto topStudent = students.front();
  std::cout << "\nTop student: " << topStudent.first << " with a score of "
            << topStudent.second << "\n";

  return 0;
}
