#include <iostream>

class Player
{
private:
    std::string name;
    int score;

public:
    // default constructor explicitly defined, member initalize list
    Player() : name(""), score(0)
    {
        std::cout << "Calling constructor Player()" << std::endl;
    }
    // constructor
    Player(std::string n, int s) : name(n), score(s)
    {
        std::cout << "Calling constructor Player(string, int)" << std::endl;
    }
    // destructor
    ~Player()
    {
        std::cout << "Calling destructor ~Player()" << std::endl;
    }
    // getters - setters
    std::string get_name()
    {
        return name;
    }
    int get_score()
    {
        return score;
    }
    void set_name(std::string name)
    {
        this->name = name;
    }
    void set_score(int score)
    {
        this->score = score;
    }

    // other member functions
    void zap()
    {
        score = 0;
    }
    void print()
    {
        std::cout << "Player " << name << " score: " << score << std::endl;
    }
};

int main()
{
    Player p1{};
    p1.set_name("Mario");
    p1.set_score(100);
    p1.zap();
    p1.print();
    Player p2{"Luigi", 200};
    p2.print();
    return 0;
}

/*
Player Mario score: 0
Player Luigi score: 200
*/