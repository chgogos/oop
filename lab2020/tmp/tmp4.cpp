#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

void test_random()
{
    random_device rd;
    mt19937 engine{rd()};
    uniform_real_distribution<double> distribution(0.0, 1.0);

    for (int i = 0; i < 10; i++)
    {
        double r = distribution(engine);
        cout << r << endl;
    }
}

class player
{
private:
    string name;
    double dexterity;
    vector<player> wins;

public:
    player(string n, double d) : name(n), dexterity(d) {}

    double get_dexterity()
    {
        return dexterity;
    }

    vector<player> get_wins(){
        return wins;
    }

    void add_win(player a_player){
        wins.push_back(a_player);
    }

    friend ostream &operator<<(ostream &os, const player &aplayer)
    {
        os << aplayer.name << " " << aplayer.dexterity;
        return os;
    }
};

int main()
{
    // test_random();
    player a_player("maria", 90.5);
    cout << a_player << endl;
    player b_player("nikos", 70.5);
    cout << b_player << endl;
    player c_player("kostas", 50.8);
    cout << c_player << endl;
    
    a_player.add_win(b_player);
    a_player.add_win(c_player);
    cout << a_player << ":" << endl;
    for(player p: a_player.get_wins()){
        cout << "\tWIN " << p << endl;
    }
}