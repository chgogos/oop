#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

using namespace std;

void scenario1()
{
    vector<int> v1{1, 2, 3, 4, 5};

    vector<int> v2;
    copy_if(begin(v1), end(v1), back_inserter(v2), [](int x) { return x % 2 == 0; });

    vector<int> v3;
    transform(begin(v2), end(v2), back_inserter(v3), [](int x) { return x * 2; });

    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;
}

void scenario2()
{
    vector<int> v1{1, 2, 3, 4, 5};

    auto v2 = v1 | ranges::view::filter([](int x) { return x % 2 == 0; }) 
                | ranges::view::transform([](int x) { return x * 2 };)
}

int main()
{
    scenario1();
    scenario2(); // using ranges
}