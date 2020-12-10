#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    auto lambda = [](int x) { cout << x * x << endl; };
    vector<int> v{1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), lambda);

    // διπλασιασμός κάθε στοιχείου του vector με for_each (1 γραμμή)


    cout << "####################" << endl;
    for (int x : v) // range based for
    {
        cout << x << endl;
    }
}
