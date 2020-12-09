#include <iostream>
#include <vector>
#include <list>
using namespace std;

void print_vector(const vector<int> &v)
{
    cout << "VECTOR: ";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void print_list(const list<int> &v)
{
    cout << "LIST  : ";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    list<int> lst{1, 2, 3, 4, 5};
    cout << "1." << endl;
    print_vector(vec);
    print_list(lst);

    cout << "2." << endl;
    cout << vec[3] << endl;

    auto lst_it = lst.begin();
    advance(lst_it, 3);
    cout << *(lst_it) << endl;

    cout << "3. " << endl;
    vec.push_back(6);
    print_vector(vec);

    lst.push_back(6);
    lst.push_front(0);
    print_list(lst);

    cout << "4. " << endl;
    vec.insert(vec.begin() + 3, 42);
    print_vector(vec);

    lst_it = lst.begin();
    advance(lst_it, 4);
    lst.insert(lst_it, 42);
    print_list(lst);

    cout << "5. " << endl;
    vec.erase(vec.begin() + 2);
    print_vector(vec);

    lst_it = lst.begin();
    advance(lst_it, 2);
    lst.erase(lst_it);
    print_list(lst);
    lst.remove(42);
    print_list(lst);
}

/*
1.
1 2 3 4 5
1 2 3 4 5
2.
4
4
3.
1 2 3 4 5 6
0 1 2 3 4 5 6
4.
1 2 3 42 4 5 6
0 1 2 3 42 4 5 6
5.
1 2 42 4 5 6
0 1 3 42 4 5 6
0 1 3 4 5 6
*/