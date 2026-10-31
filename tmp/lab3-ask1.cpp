#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    double grade;

public:
    Student(const std::string& n, double g) : name(n), grade(g) {}

    // Υπερφόρτωση του τελεστή < (σύγκριση με βάση τον βαθμό)
    bool operator<(const Student& other) const {
        return grade < other.grade;
    }

    void print() const {
        std::cout << name << ": " << grade << '\n';
    }
};

int main() {
    Student a("Maria", 8.5);
    Student b("Nikos", 7.0);

    if (b < a)
        std::cout << "Ο Nikos έχει χαμηλότερο βαθμό από τη Maria\n";
    if (b.operator<(a))
        std::cout << "Ο Nikos έχει χαμηλότερο βαθμό από τη Maria\n";

    std::vector<Student> students = {a, b, Student("Eleni", 9.2)};
    std::sort(students.begin(), students.end());  // χρησιμοποιεί τον operator<

    for (const auto& s : students)
        s.print();

    return 0;
}