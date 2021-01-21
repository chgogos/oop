// Εισάγετε σε ένα std::vector ακεραίων 10 τιμές.
// Ταξινόμήστε το vector (αύξουσα)
// Εμφανίστε το άθροισμα των 5 πρώτων τιμών με accumulate

#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

struct my_pair{
    string name;
    int age;
};

int main()
{
    pair<string, int> p;
    p.first= "Nikos";
    p.second = 20;
    cout << p.first << " " << p.second << endl;

    my_pair p2;
    p2.name="Nikos";
    p2.age=20;
    cout << p2.name << " " << p2.age << endl;

    tuple<string, int, float> t;
    get<0>(t) = "Maria";
    get<1>(t) = 19;
    get<2>(t) = 17.8;

    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
}