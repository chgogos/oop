/*
Δίνεται μια λίστα φοιτητών. Θέλουμε να μπορούμε να "φιλτράρουμε" τη λίστα 
κατά τύπο φοιτητή.

Θέλουμε να προσθέτουμε νέους τρόπους φιλτραρίσματος (π.χ. κατά εξάμηνο ή κατά 
τύπο και εξάμηνο) 

OPEN CLOSED PRINCIPLE
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class StudentType
{
    undergraduate,
    postgraduate
};

class Student
{
public:
    string name;
    int semester;
    StudentType type;

    friend ostream &operator<<(ostream &os, const Student st);
};

ostream &operator<<(ostream &os, const Student st)
{
    os << st.name << " " << st.semester << " ";
    if (st.type == StudentType::undergraduate)
    {
        os << "UNDERGRADUATE";
    }
    else
    {
        os << "POSTGRADUATE";
    }
    return os;
}

using vosp = vector<Student *>; // vosp = vector of student pointers

class Specification
{
public:
    virtual bool is_satisfied(Student *s) = 0;
};

class StudentTypeSpecification : public Specification
{
    StudentType student_type;

public:
    StudentTypeSpecification(StudentType st) : student_type(st){};
    virtual bool is_satisfied(Student *s) override
    {
        return s->type == student_type;
    }
};

class StudentFilter
{
public:
    vosp by(vosp students, Specification &spec)
    {
        vosp result;
        for (auto &s : students)
            if (spec.is_satisfied(s))
            {
                result.push_back(s);
            }
        return result;
    }
};

// ###############################################################
// ΠΑΝΩ ΑΠΟ ΤΟ ΣΗΜΕΙΟ ΑΥΤΟ ΔΕΝ ΑΛΛΑΖΕΙ ΤΙΠΟΤΑ ΣΤΟΝ ΚΩΔΙΚΑ ΚΑΘΩΣ
// ΠΡΟΣΘΕΤΟΥΜΕ ΝΕΕΣ ΔΥΝΑΤΟΤΗΤΕΣ ΦΙΛΤΡΑΡΙΣΜΑΤΟΣ
// ###############################################################

class SemesterSpecification : public Specification
{
    int semester;

public:
    SemesterSpecification(int se) : semester(se){};
    virtual bool is_satisfied(Student *s) override
    {
        return s->semester == semester;
    }
};

class SemesterStudentTypeSpecification : public Specification
{
    StudentType student_type;
    int semester;

public:
    SemesterStudentTypeSpecification(int se, StudentType st) : semester(se), student_type(st){};
    virtual bool is_satisfied(Student *s) override
    {
        return s->semester == semester && s->type == student_type;
    }
};

int main()
{
    Student maria{"Maria", 1, StudentType::undergraduate};
    Student john{"John", 2, StudentType::undergraduate};
    Student kostas{"Kostas", 3, StudentType::undergraduate};
    Student petros{"Petros", 1, StudentType::postgraduate};
    Student katerina{"Katerina", 1, StudentType::postgraduate};

    vosp all_students{&maria, &john, &kostas, &petros, &katerina};

    StudentFilter sf;

    // Φοιτητές που είναι προπτυχιακοί (undergraduate)
    cout << "Undergraduate students" << endl;
    StudentTypeSpecification undergraduate_spec(StudentType::undergraduate);
    for (auto &s : sf.by(all_students, undergraduate_spec))
    {
        cout << *s << endl;
    }

    // Φοιτητές που βρίσκονται στο εξάμηνο 1
    cout << "\nStudents at semester 1" << endl;
    SemesterSpecification sem1_spec(1);
    for (auto &s : sf.by(all_students, sem1_spec))
    {
        cout << *s << endl;
    }

    // Φοιτητές που βρίσκονται στο εξάμηνο 1 και είναι προπτυχιακοί (undergraduate)
    cout << "\nUndergraduate students at semester 1" << endl;
    SemesterStudentTypeSpecification sem1_undergraduate_spec(1, StudentType::undergraduate);
    for (auto &s : sf.by(all_students, sem1_undergraduate_spec))
    {
        cout << *s << endl;
    }
}

/*
Undergraduate students
Maria 1 UNDERGRADUATE
John 2 UNDERGRADUATE
Kostas 3 UNDERGRADUATE

Students at semester 1
Maria 1 UNDERGRADUATE
Petros 1 POSTGRADUATE
Katerina 1 POSTGRADUATE

Undergraduate students at semester 1   
Maria 1 UNDERGRADUATE
*/