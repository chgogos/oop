#include <iostream>
#include <string>

using namespace std;

class Player
{
  private:
    int score;
    string name;

  public:
    Player();
    Player(string, int);
    ~Player();
    void set_name(string);
    void set_score(int);
    void print_info();
    void zap();
};

Player::Player() : name("Mario"), score(0)
{
    cout << "Player " << name << " created by 1st" << endl;
}
Player::Player(string n, int s) : name(n), score(s)
{
    cout << "Player " << name << " created by 2nd" << endl;
}
Player::~Player()
{
    cout << "Player destructed " << name << endl;
}
void Player::set_name(string n)
{
    name = n;
}
void Player::set_score(int s)
{
    score = s;
}
void Player::print_info()
{
    cout << name << " " << score << endl;
}
void Player::zap()
{
    score = 0;
}

int main()
{
    Player p1;
    p1.set_name("Mario");
    p1.set_score(100);
    p1.print_info();

    Player p2;
    p2.print_info();

    Player p3("Luigi", 200);
    p3.print_info();

    Player players[10];

    Player *p;
    p = new Player("Zelda", 20);
    // (*p).print_info();
    p->print_info();
    delete p;

    p->zap();
}