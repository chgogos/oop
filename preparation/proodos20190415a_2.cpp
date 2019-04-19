#include <iostream>

class person
{
protected:
    int age;

public:
    static int nr_of_persons;

    person(int a) : age(a) { nr_of_persons++; }

    virtual double compute_earnings() = 0;
    virtual ~person() {}
};

class teacher : public person
{
private:
    std::string profession;

public:
    teacher(int a, std::string p) : person(a), profession(p) {}
    double compute_earnings()
    {
        return 1000.0;
    }
};

class footballer : public person
{
private:
    std::string team;

public:
    footballer(int a, std::string t) : person(a), team(t) {}
    double compute_earnings()
    {
        return 100000.0;
    }
};

int person::nr_of_persons = 0;

int main()
{
    person *persons[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Teacher or footballer (teacher=1/footballer=2): ";
        int choice;
        std::cin >> choice;
        if (choice == 1)
        {
            int age;
            std::string prof;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter profession: ";
            std::cin >> prof;
            persons[i] = new teacher(age, prof);
        }
        else
        {
            int age;
            std::string team;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter team: ";
            std::cin >> team;
            persons[i] = new footballer(age, team);
        }
    }

    std::cout << "Number of persons: " << person::nr_of_persons << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << persons[i]->compute_earnings() << std::endl;
        delete persons[i];
    }

    return 0;
}
