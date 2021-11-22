#ifndef HORSE_HPP
#define HORSE_HPP

#include <iostream>
#include <string>

using namespace std;

class horse
{
private:
    int id;
    string name;
    int startup_speed;
    int power;
    int stamina;

public:
    horse(int id, string name, int ss, int p, int st);

    int get_id();

    string get_name();

    bool move_forward(int step, double r);

    friend ostream& operator<<(ostream& os, const horse& h);
};

#endif