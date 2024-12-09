#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using sic = std::tuple<std::string, int, char>;

int main() {
  // Vector of tuples to store student name, score, and grade
  std::vector<sic> students = {{"Alice", 85, 'B'},
                               {"Bob", 90, 'A'},
                               {"Charlie", 78, 'C'},
                               {"Diana", 92, 'A'},
                               {"Eve", 88, 'B'}};

  // Display the original list
  std::cout << "Original list of students (Name, Score, Grade):\n";
  for (const auto& student : students) {
    std::cout << std::get<0>(student) << ", "   // Name
              << std::get<1>(student) << ", "   // Score
              << std::get<2>(student) << "\n";  // Grade
  }

  // Sort students by score in descending order
  std::sort(students.begin(), students.end(), [](const sic& a, const sic& b) {
    return std::get<1>(a) > std::get<1>(b);  // Compare scores
  });

  // Display the sorted list
  std::cout << "\nSorted list (by score descending):\n";
  for (const auto& student : students) {
    std::cout << std::get<0>(student) << ", " << std::get<1>(student) << ", "
              << std::get<2>(student) << "\n";
  }

  // Find the student with the highest score
  auto topStudent = students.front();
  std::cout << "\nTop student: " << std::get<0>(topStudent)
            << " with a score of " << std::get<1>(topStudent) << " and grade "
            << std::get<2>(topStudent) << "\n";

  // Calculate the average score
  int totalScore = 0;
  for (const auto& student : students) {
    totalScore += std::get<1>(student);  // Add scores
  }
  double averageScore = static_cast<double>(totalScore) / students.size();
  std::cout << "\nAverage score: " << averageScore << "\n";

  return 0;
}
