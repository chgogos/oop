#include <iostream>
#include <string>
#include <vector>

class Player
{
  private:
    std::string name;
    std::vector<int> *victories;

  public:
    Player(std::string n) : name(n), victories(new std::vector<int>())
    {
        std::cout << "Constructor Player(string) called" << std::endl;
    }

    // copy constructor (deep)
    Player(const Player &p) : name(p.name), victories(new std::vector<int>())
    {
        for (int v : *(p.victories))
        {
            victories->push_back(v);
        }
        std::cout << "Copy Constructor Player(const Player&) called" << std::endl;
    }

    ~Player()
    {
        std::cout << "Destructor ~Player() called" << std::endl;
        delete victories;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    void add_victory(int x)
    {
        victories->push_back(x);
    }

    void print()
    {
        std::cout << name << " ";
        for (int v : *victories)
            std::cout << v << " ";
        std::cout << std::endl;
    }
};

int main()
{
    Player p1("Mario");
    p1.add_victory(11);
    p1.add_victory(15);
    p1.add_victory(19);
    Player p2(p1);
    p2.set_name("Luigi");
    p2.add_victory(20);
    p1.print();
    p2.print();
}