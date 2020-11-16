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
}

/*
Undergraduate students
Maria 1 UNDERGRADUATE
John 2 UNDERGRADUATE
Kostas 3 UNDERGRADUATE
*/