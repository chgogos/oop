#include <iostream>
#include <algorithm>
#include <vector>

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
    // partial_sort
    vector<int> v{3, 2, 6, 1, 8, 6, 5, 3, 4, 9, 0, 1, 2};
    partial_sort(begin(v), begin(v) + 5, end(v));
    print_vector(v);

    // partial_sort_copy
    vector<int> v2{3, 2, 6, 1, 8, 6, 5, 3, 4, 9, 0, 1, 2};
    vector<int> v3(3);
    partial_sort_copy(begin(v2), end(v2), begin(v3), end(v3));
    print_vector(v3);

    // nth_element (εύρεση της τιμής που θα βρισκότανν στην 3η θέση του πίνακα αν είχε ταξινομηθεί)
    vector<int> v4{3, 2, 6, 1, 8, 6, 5, 3, 4, 9, 0, 1, 2};
    nth_element(begin(v4), begin(v4) + 3, end(v4));
    cout << *(begin(v4) + 3) << endl;
}

/*
0 1 1 2 2 8 6 6 5 9 4 3 3 
0 1 1 
2
*/