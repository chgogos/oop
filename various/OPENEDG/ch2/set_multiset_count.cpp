// 2.2.13
#include <set>
#include <string>
#include <iostream>
#include <functional>

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
    int t[] = {2, 10, 8, 4, 5, 5, 3, 10, 7, 2};
    set<int, greater<int>> s1(t, t + 10);
    multiset<int, greater<int>> s2(t, t + 10);
    cout << "S1: ";
    print(s1.begin(), s1.end());
    cout << endl;
    cout << "S2: ";
    print(s2.begin(), s2.end());
    cout << endl;
    cout << "How many '2' there are?" << endl;
    cout << "S1: " << s1.count(2) << endl;
    cout << "S2: " << s2.count(2) << endl;
    if (s1.count(1) > 0)
    {
        cout << "There is '1' in the set\n";
    }
    else
    {
        cout << "There is no '1' in the set\n";
    }
    return 0;
}

/*
S1: 10 8 7 5 4 3 2 
S2: 10 10 8 7 5 5 4 3 2 2
How many '2' there are?
S1: 1
S2: 2
There is no '1' in the set
*/