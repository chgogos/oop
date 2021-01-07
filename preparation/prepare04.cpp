#include <iostream>
#include <string>
#include <vector>

class person
{
private:
    std::string name;

public:
    person(){};
    person(std::string n) : name(n) {}
    std::string get_name() const
    {
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

    void set_director(const person &p)
    {
        director = p;
    }

    void add_cast(const person &p)
    {
        actors.push_back(p);
    }

    void display_info() const
    {
        std::cout << title << " ";
        std::cout << "directed by " << director.get_name() << std::endl;
        std::cout << "Cast:" << std::endl;
        for (auto p : actors)
        {
            std::cout << p.get_name() << std::endl;
        }
    }
};

int main()
{
    person d1("Director 1");
    person d2("Director 2");
    person a1("Actor 1");
    person a2("Actor 2");
    person a3("Actor 3");
    movie m1("Movie 1");
    movie m2("Movie 2");

    m1.set_director(d1);
    m2.set_director(d2);
    m1.add_cast(a1);
    m1.add_cast(a2);
    m2.add_cast(a2);
    m2.add_cast(a3);

    m1.display_info();
    m2.display_info();

    return 0;
}

/*
Movie 1 directed by Director 1
Cast:
Actor 1
Actor 2
Movie 2 directed by Director 2
Cast:
Actor 2
Actor 3
*/