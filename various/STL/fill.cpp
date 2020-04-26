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
    // fill
    vector<int> v(10);
    fill(begin(v), end(v), 1);
    print_vector(v);

    //fill_n (γέμισε τις πρώτες 5 θέσεις με 2)
    fill_n(begin(v), 5, 2);
    print_vector(v);

    //iota
    iota(begin(v), end(v), 1);
    print_vector(v);

    //generate
    int value = 10;
    generate(begin(v), end(v), [&value]() { return value--; });
    print_vector(v);

    // generate_n
    value = 1;
    generate_n(begin(v), 3, [&value]() {value = value*2; return value; });
    print_vector(v);
}

/*
1 1 1 1 1 1 1 1 1 1 
2 2 2 2 2 1 1 1 1 1 
1 2 3 4 5 6 7 8 9 10 
10 9 8 7 6 5 4 3 2 1 
2 4 8 7 6 5 4 3 2 1
*/