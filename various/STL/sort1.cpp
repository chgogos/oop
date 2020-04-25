#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void print_vector(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{1, -1, 5, 6, 3, -9, 10, 3, 8, 7, 3, 5, 7, 2};
    sort(begin(v), end(v));
    print_vector(v);
    sort(begin(v), end(v), [](int first, int second){return first > second;});
    print_vector(v);
    sort(begin(v), end(v), [](int first, int second){return abs(first) < abs(second);});
    print_vector(v);

}