#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Rec
{
    string name;
    string addr;
};

// function object
struct cmp_by_name
{
    bool operator()(const Rec &a, const Rec &b) const
    {
        return a.name < b.name;
    }
};

struct cmp_by_addr
{
    bool operator()(const Rec &a, const Rec &b) const
    {
        return a.addr < b.addr;
    }
};

int main()
{
    vector<Rec> v{{"Nick", "BBB"}, {"Andreas", "CCC"}, {"Panos", "AAA"}};
    for (auto &r : v)
    {
        cout << r.name << " " << r.addr << endl;
    }

    cout << "SORT BY NAME" << endl;
    sort(begin(v), end(v), cmp_by_name());
    for (auto &r : v)
    {
        cout << r.name << " " << r.addr << endl;
    }

    cout << "SORT BY ADDR" << endl;
    sort(begin(v), end(v), cmp_by_addr());
    for (auto &r : v)
    {
        cout << r.name << " " << r.addr << endl;
    }
}

/*
Nick BBB
Andreas CCC
Panos AAA
SORT BY NAME
Andreas CCC
Nick BBB
Panos AAA
SORT BY ADDR
Panos AAA
Nick BBB
Andreas CCC
*/
