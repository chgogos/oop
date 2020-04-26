#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vector(v);
    swap_ranges(begin(v), begin(v) + 3, begin(v) + 7);
    print_vector(v);

}

/*
1 2 3 4 5 6 7 8 9 10 
8 9 10 4 5 6 7 1 2 3
*/