#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    for_each(begin(v), end(v), [](int &x) {if (x%2==0) x = 0; });

    for_each(begin(v), end(v),[](int &x){cout << x << " ";});
}

/*
1 0 3 0 5
*/