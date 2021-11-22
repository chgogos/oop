#include "horse.hpp"

horse::horse(int id, string name, int ss, int p, int st) : id(id), name(name), startup_speed(ss), power(p), stamina(st) {}

bool horse::move_forward(int step, double r)
{
    if (step == 1)
    {
        return startup_speed > r;
    }
    else if (step <= 8)
    {
        return power > r;
    }
    else
    {
        return (power + stamina) / 2.0 > r;
    }
}

int horse::get_id()
{
    return id;
}

string horse::get_name()
{
    return name;
}

ostream &operator<<(ostream &os, const horse &h)
{
    os << h.id << " " << h.name << " startup = " << h.startup_speed << " power = " << h.power << " stamina = " << h.stamina;
    return os;
}