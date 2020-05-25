#include <iostream>
#include <set>

using namespace std;

struct student
{
    string name;
    double grade;
};

bool operator<(const student &st1, const student &st2)
{
    return st1.name < st2.name;
}

// functor
struct student_comp_by_grade
{
    bool operator()(const student &st1, const student &st2) const
    {
        return st1.grade < st2.grade;
    }
};

int main()
{
    set<student> students{{"nikos", 6.1}, {"maria", 7.2}, {"kostas", 9.0}, {"sofia", 2.5}};
    for (auto &s : students)
    {
        cout << s.name << " " << s.grade << endl;
    }

    cout << "##################" << endl;

    set<student, student_comp_by_grade> students2{{"nikos", 6.1}, {"maria", 7.2}, {"kostas", 9.0}, {"sofia", 2.5}};
    for (auto &s : students2)
    {
        cout << s.name << " " << s.grade << endl;
    }
}

/*
kostas 9
maria 7.2
nikos 6.1
sofia 2.5
##################
sofia 2.5
nikos 6.1
maria 7.2
kostas 9
*/