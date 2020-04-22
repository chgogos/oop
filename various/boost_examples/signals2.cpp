#include <iostream>
#include <string>
#include <boost/signals2.hpp>

using namespace boost;
using namespace boost::signals2;
using namespace std;

class player
{
public:
    string name;
    player(string n) : name(n){};
    signal<void(string n)> scores;
};

int main()
{
    player p("messi");
    
    auto conn  = p.scores.connect([](string name) { std::cout << name << " goal!!!" << std::endl; });

    p.scores(p.name);
    p.scores(p.name);

    // ένα από τα 2 ακόλουθα για αποσύνδεση
    // conn.disconnect(); 
    p.scores.disconnect_all_slots();
    
    p.scores(p.name);
    p.scores(p.name);
}
