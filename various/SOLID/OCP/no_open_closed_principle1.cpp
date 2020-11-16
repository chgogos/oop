/*
Δίνεται μια λίστα φοιτητών. Θέλουμε να μπορούμε να "φιλτράρουμε" τη λίστα 
κατά τύπο φοιτητή

Ο ακόλουθος κώδικας παραβιάζει το OPEN CLOSED PRINCIPLE
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

class StudentFilter
{
public:
    vosp by_student_type(const vosp students, const StudentType type)
    {
        vosp results;
        for (auto &st : students)
        {
            if (st->type == type)
            {
                results.push_back(st);
            }
        }
        return results;
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
    for (auto &s : sf.by_student_type(all_students, StudentType::undergraduate))
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