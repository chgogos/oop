#include <iostream>
#include <iterator>
#include <vector>
#include <queue>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main()
{
    //back_inserter
    vector<int> v;
    fill_n(back_inserter(v), 5, 1); // δεν χρειάζεται να έχει ήδη στοιχεία το διάνυσμα
    print_vector(v);

    // lambda capture
    generate_n(back_inserter(v), 5, [n = 0]() mutable { return n++; });
    print_vector(v);

    deque<int> d{1,2,3};
    generate_n(back_inserter(d), 5, [n = 0]() mutable { return n++; });
    generate_n(front_inserter(d), 5, [n = 0]() mutable { return n++; });
    for_each(begin(d), end(d), [](int x) { cout << x << " "; });
    cout << endl;

    vector<int> v2;
    copy_if(begin(v), end(v), back_inserter(v2), [](int elem){return elem%2==0;});
    print_vector(v2);

    string s{"aaaabbbabcccc"};
    string u;
    sort(begin(s), end(s));
    unique_copy(begin(s), end(s), back_inserter(u));
    cout << u << endl;

    string r;
    reverse_copy(begin(s), end(s), back_inserter(r));
    cout << r << endl;
}

/*
1 1 1 1 1 
1 1 1 1 1 0 1 2 3 4 
4 3 2 1 0 1 2 3 0 1 2 3 4 
0 2 4 
abc
ccccbbbbaaaaa
*/