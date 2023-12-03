#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
void two_maxes(std::vector<T> v, T &max1, T &max2)
{
    sort(v.begin(), v.end(), std::greater<T>());
    max1 = v[0];
    max2 = v[1];
}

class student
{
public:
    std::string name;
    double grade;
    bool operator>(const student &other) const
    {
        return grade > other.grade;
    }
    friend std::ostream &operator<<(std::ostream &os, const student &a_student)
    {
        os << a_student.name << " - " << a_student.grade;
        return os;
    }
};

int main()
{
    std::vector<int> v1{5, 6, 3, 1, 7, 8, 7, 3};
    int max1, max2;
    two_maxes(v1, max1, max2);
    std::cout << max1 << " - " << max2 << std::endl;

    std::vector<student> v2{{"maria", 7.1}, {"petros", 8.2}, {"ioanna", 9.3}, {"nikos", 5.2}};
    student max_s1, max_s2;
    two_maxes(v2, max_s1, max_s2);
    std::cout << max_s1 << " - " << max_s2 << std::endl;

    return 0;
}
