// παράδειγμα με αρχείο τυχαίας προσπέλασης (100 θέσεων)
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>

class student
{
private:
    int id;
    char name[20];
    double grade;

public:
    student() : id(0), grade(0.0)
    {
        strcpy(this->name, " ");
    }

    student(int id, char *name, double grade) : id(id), grade(grade) { strcpy(this->name, name); }

    int get_id()
    {
        return id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    char *get_name()
    {
        return name;
    }

    void set_name(const char *name)
    {
        strcpy(this->name, name);
    }

    double get_grade()
    {
        return grade;
    }

    void set_grade(double grade)
    {
        this->grade = grade;
    }

    friend std::ostream &operator<<(std::ostream &os, const student &other)
    {
        os << other.id << ". " << other.name << " " << other.grade;
        return os;
    }
};

const int MAX_STUDENTS = 20;

void create_empty_file()
{
    std::ofstream out_f("data3.dat", std::ios::out | std::ios::binary);
    if (!out_f)
    {
        std::cerr << "File could not be opened." << std::endl;
        exit(-1);
    }
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        student a_student;
        out_f.write(reinterpret_cast<const char *>(&a_student), sizeof(student));
    }
    out_f.close();
}

void list_of_students()
{
    std::ifstream in_f("data3.dat", std::ios::in | std::ios::binary);
    if (!in_f)
    {
        std::cerr << "File could not be opened." << std::endl;
        exit(-1);
    }

    student a_student;
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        in_f.read(reinterpret_cast<char *>(&a_student), sizeof(student));
        if (a_student.get_id() != 0)
        {
            std::cout << a_student << std::endl;
        }
        else
        {
            std::cout << i + 1 << ". NULL" << std::endl;
        }
    }
    in_f.close();
}

void add_student()
{
    int id;
    std::string name;
    double grade;
    std::cout << "Input id: ";
    std::cin >> id;
    if (id > MAX_STUDENTS || id < 1)
    {
        return;
    }
    std::fstream in_out_f("data3.dat", std::ios::in | std::ios::out | std::ios::binary);
    if (!in_out_f)
    {
        std::cerr << "File could not be opened." << std::endl;
        exit(-1);
    }
    in_out_f.seekg((id - 1) * sizeof(student));
    student a_student;
    in_out_f.read(reinterpret_cast<char *>(&a_student), sizeof(student));
    if (a_student.get_id() == 0)
    {
        std::cout << "Enter name and grade: ";
        std::cin >> std::setw(20) >> name;
        std::cin >> grade;
        a_student.set_id(id);
        a_student.set_name(name.c_str());
        a_student.set_grade(grade);
        in_out_f.seekp((id - 1) * sizeof(student));
        in_out_f.write(reinterpret_cast<const char *>(&a_student), sizeof(student));
    }
    else
    {
        std::cerr << "Student with id: " << id << " already exists" << std::endl;
    }
    in_out_f.close();
}

void update_student()
{
    int id;
    std::cout << "Input id: ";
    std::cin >> id;
    if (id > MAX_STUDENTS || id < 1)
    {
        return;
    }
    std::fstream in_out_f("data3.dat", std::ios::in | std::ios::out | std::ios::binary);
    if (!in_out_f)
    {
        std::cerr << "File could not be opened." << std::endl;
        exit(-1);
    }
    in_out_f.seekg((id - 1) * sizeof(student));
    student a_student;
    in_out_f.read(reinterpret_cast<char *>(&a_student), sizeof(student));
    std::cout << a_student << std::endl;
    if (a_student.get_id() != 0)
    {
        std::string name;
        double grade;
        std::cout << "Enter name and grade: ";
        std::cin >> std::setw(20) >> name;
        std::cin >> grade;
        a_student.set_id(id);
        a_student.set_name(name.c_str());
        a_student.set_grade(grade);
        in_out_f.seekp((id - 1) * sizeof(student));
        in_out_f.write(reinterpret_cast<const char *>(&a_student), sizeof(student));
    }
    else
    {
        std::cerr << "Student with id: " << id << " does not exist" << std::endl;
    }
    in_out_f.close();
}

void remove_student()
{
    int id;
    std::cout << "Input id: ";
    std::cin >> id;
    if (id > MAX_STUDENTS || id < 1)
    {
        return;
    }
    std::fstream in_out_f("data3.dat", std::ios::in | std::ios::out | std::ios::binary);
    if (!in_out_f)
    {
        std::cerr << "File could not be opened." << std::endl;
        exit(-1);
    }
    in_out_f.seekg((id - 1) * sizeof(student));
    student a_student;
    in_out_f.read(reinterpret_cast<char *>(&a_student), sizeof(student));
    if (a_student.get_id() != 0)
    {
        a_student.set_id(0);
        a_student.set_name(" ");
        a_student.set_grade(0.0);
        in_out_f.seekp((id - 1) * sizeof(student));
        in_out_f.write(reinterpret_cast<const char *>(&a_student), sizeof(student));
    }
    else
    {
        std::cerr << "Student with id: " << id << " does not exist" << std::endl;
    }
    in_out_f.close();
}

int main()
{
    int choice;
    do
    {
        std::cout << "1. Generate file" << std::endl;
        std::cout << "2. List of students" << std::endl;
        std::cout << "3. Add student" << std::endl;
        std::cout << "4. Update student" << std::endl;
        std::cout << "5. Remove student" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            create_empty_file();
            break;
        case 2:
            list_of_students();
            break;
        case 3:
            add_student();
            break;
        case 4:
            update_student();
            break;
        case 5:
            remove_student();
            break;
        default:
            break;
        }
    } while (choice != 6);
}
