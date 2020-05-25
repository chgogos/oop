#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<int> v{3, 2, 5, 2, 7, 9, 10, 2, 22, 1, 3};
    auto res = minmax_element(v.begin(), v.end());
    cout << "Min: " << *res.first << " at position: " << (res.first - v.begin()) << endl;
    cout << "Max: " << *res.second << " at position: " << (res.second - v.begin()) << endl;
}