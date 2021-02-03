#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include <future>
using namespace std;

void fun(vector<int> v)
{
    int sum = 0;
    for (int x : v)
    {
        sum += x;
    }
    cout << __PRETTY_FUNCTION__ << " " << sum << endl;
}

int main()
{
    vector<int> v(1000);
    iota(v.begin(), v.end(), 1);

    for (int i = 0; i < 10; i++)
    {
        auto fu = async(launch::async, fun, v);
    }
}