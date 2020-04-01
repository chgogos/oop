#include "cargo.hpp"

int cargo::count = 0;

cargo::cargo() : id(0), destination("Undefined"), weight(0.0), fragile(false) { count++; }
cargo::cargo(int i, string d, double w, bool f) : id(i), destination(d), weight(w), fragile(f) { count++; }
double cargo::get_weight()
{
    return weight;
}
void cargo::set_weight(double w)
{
    weight = w;
}

void cargo::show()
{
    cout << boolalpha;
    cout << "[" << id << ", " << destination << ", " << weight << ", " << fragile << "]" << endl;
}

void cargo::make_safe()
{
    if (!fragile)
    {
        fragile = true;
        weight += 5.0;
    }
}

bool cargo::operator<(const cargo &other) const
{
    return weight < other.weight;
}

bool cargo::operator==(const cargo &other) const
{
    return (id == other.id && destination == other.destination && weight == other.weight && fragile == other.weight);
}

ostream &operator<<(ostream &os, const cargo &c)
{
    os << boolalpha;
    os << "[" << c.id << ", " << c.destination << ", " << c.weight << ", " << c.fragile << "]";
    return os;
}