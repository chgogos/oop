#include <iostream>
#include <string>
#include <vector>

class person
{
private:
    std::string name;

public:
    person(){};
    person(std::string n): name(n){};
    std::string get_name(){
        return name;
    }
};

class movie
{
private:
    std::string title;
    int year;
    person director;
    std::vector<person> actors;

public:
    movie(std::string t) : title(t) {}

    void set_director(person &p)
    {
        director = p;
    }

    void add_cast(person &p)
    {
        actors.push_back(p);
    }

    void display_info()
    {
        std::cout << title << " ";
        std::cout << "directed by " << director.get_name() << std::endl;
        for (auto p : actors)
        {
            std::cout << p.get_name() << std::endl;
        }
    }
};

int main()
{
    person d("John Stiles");
    person a1("John Doe");
    person a2("Jane Doe");
    movie m("Noname");

    m.set_director(d);
    m.add_cast(a1);
    m.add_cast(a2);

    m.display_info();

    return 0;
}


/*
Noname directed by John Stiles
John Doe
Jane Doe
*/