#include <iostream>
#include <algorithm>
#include "cargo.hpp"

using namespace std;
using namespace std::rel_ops;

int main()
{
    cargo c1;
    c1.set_weight(100.0);
    c1.show();
    cargo c2(1, "test", 100.0, false);
    c2.show();

    cargo c3;
    cargo c4;
    cout << boolalpha;
    cout << (c3 == c4) << endl;
    cout << (c3 != c4) << endl;
    cargo c5(1, "Patras", 1000.0, false);
    cargo c6(2, "Patras", 2000.0, false);
    cout << (c5 < c6) << endl;
    cout << (c5 <= c6) << endl;
    cout << (c6 > c5) << endl;
    cout << (c6 >= c5) << endl;

    cargo a[5] = {
        cargo(1, "Patras", 1000, 0),
        cargo(2, "Athens", 200, 1),
        cargo(3, "Kalamata", 2000, 0),
        cargo(4, "Patras", 1500, 1),
        cargo(5, "Athens", 1100, 0)};

    for (int i = 0; i < 5; i++)
    {
        a[i].make_safe();
    }

    for (int i = 0; i < 5; i++)
    {
        // a[i].show();
        cout << a[i] << endl;
    }

    cout << "SORTED ARRAY" << endl;
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Number of cargo instances: " << cargo::count << endl;
}
