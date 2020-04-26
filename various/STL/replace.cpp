#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main()
{
    vector<int> v(10);
    iota(begin(v), end(v), 1);
    print_vector(v);

    // αντικατάσταση των 5 με -5
    replace(begin(v), end(v), 5, -5);
    print_vector(v);

    // αντικατάσταση όλων των άρτιων τιμών με 0
    replace_if(begin(v), end(v), [](int elem) {return (elem%2==0); }, 0);
    print_vector(v);
}