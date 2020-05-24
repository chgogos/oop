#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // iota

using namespace std;

struct FO
{
    bool operator()(int x) { return x % 2 == 0; };
};

int main()
{
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);

    // αφαίρεση όλων των άρτιων τιμών του vector
    remove_if(v.begin(), v.end(), FO());
    for (auto x: v)
        cout << x << " ";
    cout << endl;
}