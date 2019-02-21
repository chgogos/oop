#include <iostream>

class Player
{
  private:
    std::string _name;
    int _score;

  public:
    // constructors
    Player() : _name(), _score() {} // default constructor
    Player(std::string name, int score) : _name(name), _score(score) {} // member initializer lists
    // Player(std::string name, int score) {
    //     _name=name; 
    //     _score=score;
    // }

    // getters - setters
    void set_name(std::string name)
    {
        _name = name;
    }
    void set_score(int score)
    {
        _score = score;
    }
    std::string get_name()
    {
        return _name;
    }
    int get_score()
    {
        return _score;
    }

    void zap()
    {
        _score = 0;
    }
    void print()
    {
        std::cout << "Player " << _name << " score: " << _score << std::endl;
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