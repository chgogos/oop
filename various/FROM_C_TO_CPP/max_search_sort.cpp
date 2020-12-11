#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct person
{
    string name;
    int age;
};

int main()
{
    vector<person> a{{"nikos", 20}, {"petros", 25}, {"maria", 30}, {"kostas", 22}, {"andreas", 37}};

    // εύρεση μεγαλύτερης και μικρότερης ηλικίας
    cout << "1. MIN + MAX\n";
    auto pp = minmax_element(a.begin(), a.end(), [](const person &p1, const person &p2) { return p1.age < p2.age; });
    cout << "MIN AGE=" << pp.first->age << endl;
    cout << "MAX AGE=" << pp.second->age << endl;

    // αναζήτηση ηλικίας με βάση το όνομα
    cout << "2. SEARCH\n";
    string key = "kostas";
    auto pos = find_if(a.begin(), a.end(), [key](const person &p) { return p.name == key; });
    if (pos != a.end())
    {
        cout << "Found " << pos->name << " " << pos->age << endl;
    }
    else
    {
        cout << "Not found %s\n";
    }

    // ταξινόμηση με βάση το όνομα
    cout << "3. SORT BY NAMES IN ASCENDING ORDER\n";
    sort(a.begin(), a.end(), [](const person &p1, const person &p2) { return p1.name < p2.name; });
    for (const auto &p : a)
    {
        cout << p.name << " " << p.age << endl;
    }
}

/*
1. MIN + MAX
MIN AGE=20
MAX AGE=37
2. SEARCH
Found kostas 22
3. SORT BY NAMES IN ASCENDING ORDER
andreas 37
kostas 22
maria 30
nikos 20
petros 25
*/