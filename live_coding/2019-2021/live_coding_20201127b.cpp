#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> names{"Nikos", "Maria", "Andreas"};
    vector<int> ages{12, 18, 16};

    for(auto x: names){
        cout << x << endl;
    }
    cout << "--------------------\n";
    for(auto x: ages){
        cout << x << endl;
    }
    cout << "--------------------\n";
    sort(names.begin(), names.end());
    for(auto x: names){
        cout << x << endl;
    }
    cout << "--------------------\n";
    sort(ages.begin(), ages.end());
    for(auto x: ages){
        cout << x << endl;
    }
    cout << "--------------------\n";

}

/*
Nikos
Maria
Andreas
--------------------
12
18
16
--------------------
Andreas
Maria
Nikos
--------------------
12
16
18
--------------------
*/