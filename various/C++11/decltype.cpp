#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3};

    decltype(v) v2;
    v2.push_back(10);
    v2.push_back(20);

    typedef decltype(v) VI;
    VI v3;
    v3.push_back(10);
    v3.push_back(20);
}
