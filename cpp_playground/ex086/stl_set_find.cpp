#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> a_set{3, 2, 8, 4, 1, 5, 6, 0, 7, 9};

    auto itr = find(a_set.begin(), a_set.end(), 5);
    if (itr==a_set.end()){
        cout << "not found" << endl;
    } else {
        cout << "found" << distance(a_set.begin(), itr);
    }

}