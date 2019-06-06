#include <iostream>
#include <vector>
#include <algorithm>

class person
{
protected:
    std::string name;
    std::string day_of_birth;

public:
    person(std::string n, std::string dob) : name(n), day_of_birth(dob) {}

    virtual ~person() {}

    virtual std::string info() = 0;

    std::string get_name()
    {
        return name;
    }
};

class employee : public person
{
protected:
    std::string acct_no; // αριθμός λογαριασμού
public:
    employee(std::string n, std::string dob, std::string an) : person(n, dob), acct_no(an) {}

    virtual std::string info()
    {
        return "Name: " + name + " DOB: " + day_of_birth + " ACCOUNT_NO: " + acct_no;
    }
};

class professor : public employee
{
private:
    std::vector<std::string> specializations;

public:
    professor(std::string n, std::string dob, std::string an) : employee(n, dob, an) {}
    void add_specialization(std::string specialization)
    {
        specializations.push_back(specialization);
    }
    std::string info()
    {
        std::string s = employee::info();
        s += " Specializations: ";
        for (std::string sp : specializations)
        {
            s += sp + " ";
        }
        return s + " (PROFESSOR)";
    }
};

class administrative_employee : public employee
{
private:
    int years_of_experience;

public:
    administrative_employee(std::string n, std::string dob, std::string an, int yoe) : employee(n, dob, an), years_of_experience(yoe) {}

    std::string info()
    {
        return employee::info() + " Experience: " + std::to_string(years_of_experience) + " (ADMINISTRATIVE EMPLOYEE)";
    }
};

class student : public person
{
private:
    int semester;

public:
    student(std::string n, std::string dob, int sem) : person(n, dob), semester(sem) {}

    std::string info()
    {
        return "Name: " + name + " DOB: " + day_of_birth + " SEMESTER: " + std::to_string(semester) + " (STUDENT)";
    }
};

int main()
{
    employee emp("Nikos", "1/1/1980", "0001");
    std::cout << emp.info() << std::endl;

    professor prof("Maria", "1/6/1965", "0002");
    prof.add_specialization("Algorithms");
    prof.add_specialization("Artificial Intelligence");
    prof.add_specialization("Mathematics");
    std::cout << prof.info() << std::endl;

    administrative_employee adm_emp("Kostas", "2/4/1985", "0003", 10);
    std::cout << adm_emp.info() << std::endl;

    student stu("Georgia", "1/3/2003", 2);
    std::cout << stu.info() << std::endl;

    std::cout << "List of persons" << std::endl;
    std::vector<person *> persons;
    persons.push_back(&emp);
    persons.push_back(&prof);
    persons.push_back(&adm_emp);
    persons.push_back(&stu);

    std::sort(persons.begin(), persons.end(),
              [](person *p1, person *p2) { return (p1->get_name() < p2->get_name()); });

    for (person *p : persons)
    {
        std::cout << p->info() << std::endl;
    }

    return 0;
}
