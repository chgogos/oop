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
        player(string n, double d): name(n), dexterity(d){}
    
    friend ostream& operator<<(ostream& os, const player &aplayer){
        os << aplayer.name << " " << aplayer.dexterity;
        return os;
    }
};

int main()
{
    // test_random();
    player a_player("maria", 90.5);
    cout << a_player << endl;
}