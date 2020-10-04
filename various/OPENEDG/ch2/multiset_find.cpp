// 2.2.12
#include <set>
#include <iostream>
#include <functional>
#include <iterator>

using namespace std;

template <class T>
void print(T start, T end)
{
    for (; start != end; ++start)
    {
        std::cout << *start << " ";
    }
}

int main()
{
    int t[] = {16, 10, 8, 40, 6, 15, 3, 9, 7, 2};
    multiset<int> s1(t, t + 10);

    print(s1.begin(), s1.end());
    cout << endl;
    cout << "The first version of insert:\n";
    multiset<int>::iterator it1 = s1.insert(13);
    print(s1.begin(), s1.end());
    cout << endl;
    cout << "Inserted element position: " << distance(s1.begin(), it1) << endl
         << endl;

    multiset<int>::iterator it2 = s1.insert(13);
    print(s1.begin(), s1.end());
    cout << endl;
    cout << "Inserted element position: " << distance(s1.begin(), it2) << endl
         << endl;

    cout << "The second version of insert:\n";
    it1 = s1.insert(s1.find(10), 11);
    it2 = s1.insert(s1.find(11), 11);
    if (it1 == it2)
    {
        cout << "Second insertion was not successful\n";
    }
    print(s1.begin(), s1.end());
    cout << endl
         << endl;

    cout << "The third version of insert:\n";
    int t2[] = {4, 10, 15, 21, 0};
    s1.insert(t2, t2 + 5);
    print(s1.begin(), s1.end());
    cout << endl;

    return 0;
}

/*
2 3 6 7 8 9 10 15 16 40 
The first version of insert:
2 3 6 7 8 9 10 13 15 16 40
Inserted element position: 7

2 3 6 7 8 9 10 13 13 15 16 40
Inserted element position: 8

The second version of insert:
2 3 6 7 8 9 10 11 11 13 13 15 16 40

The third version of insert:
0 2 3 4 6 7 8 9 10 10 11 11 13 13 15 15 16 21 40
*/