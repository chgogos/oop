#ifndef CARGO_HPP
#define CARGO_HPP

#include <iostream>
#include <string>

using namespace std;

class cargo
{
public:
    static int count;

    // κατασκευαστές
    cargo();
    cargo(int i, string d, double w, bool f);

    // getters/setters
    double get_weight();
    void set_weight(double w);

    // άλλες συναρτήσεις
    void show();
    void make_safe();

    // υπερφορτωμένοι τελεστές
    bool operator<(const cargo &other) const;
    bool operator==(const cargo &other) const;

private:
    int id;
    string destination;
    double weight;
    bool fragile;

    friend ostream &operator<<(ostream &os, const cargo &c);
};

#endif