#include <vector>
#include <iostream>

// forward declaration για την lab_class
class lab_class;

class student
{
private:
    std::string name;
    lab_class *lc; // πρέπει να δηλωθεί pointer, αλλιώς incomplete type error λόγω forward declaration

public:
    student(std::string name) : name(name), lc(nullptr) {}

    std::string get_name()
    {
        return name;
    }

    lab_class *get_lab_class()
    {
        return lc;
    }

    void set_lab_class(lab_class *lc)
    {
        this->lc = lc;
    }
};

class lab_class
{
private:
    std::string id;
    std::vector<student *> enrolled_students;

public:
    lab_class(std::string id) : id(id) {}

    std::string get_id()
    {
        return id;
    }

    // εγγραφή φοιτητή σε τμήμα (μόνο αν ο φοιτητής δεν έχει ήδη εγγραφεί σε κάποιο άλλο τμήμα)
    void enroll(student *s)
    {
        if (s->get_lab_class() == nullptr)
        {
            s->set_lab_class(this);
            enrolled_students.push_back(s);
            std::cout << "Student " << s->get_name() << " enrolls at " << id << std::endl;
        }
        else
        {
            std::cerr << "Student " << s->get_name() << " has already been enrolled !!!" << std::endl;
        }
    }

    void display_enrolled_students()
    {
        std::cout << "Lab: " << id << " # of students: " << enrolled_students.size() << std::endl;
        for (student *s : enrolled_students)
        {
            std::cout << s->get_name() << " - ";
            if (s->get_lab_class() == nullptr)
            {
                std::cout << "UNASSIGNED" << std::endl;
            }
            else
            {
                std::cout << s->get_lab_class()->get_id() << std::endl;
            }
        }
    }
};

int main()
{
    student s1("kostas");
    student s2("maria");
    student s3("petros");
    student s4("christina");
    student s5("tasos");

    lab_class oop1_lab("OOP1");
    lab_class oop2_lab("OOP2");

    oop1_lab.enroll(&s1);
    oop1_lab.enroll(&s3);
    oop2_lab.enroll(&s4);
    oop2_lab.enroll(&s5);
    oop2_lab.enroll(&s1); // δεν θα πραγματοποιηθεί η εγγραφή, είναι ήδη εγγεγραμμένος σε άλλο τμήμα

    oop1_lab.display_enrolled_students();
    oop2_lab.display_enrolled_students();

    return 0;
}