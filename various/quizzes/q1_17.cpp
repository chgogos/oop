#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> a_set;
    for (int i = 0; i < 5; i++)
    {
        string t;
        cin >> t;
        a_set.insert(t);
    }
    for (auto x : a_set)
    {
        cout << x << endl;
    }
}

/*
> Agrinio
> Arta
> Igoumenitsa
> Ioannina
> Preveza
Agrinio
Arta
Igoumenitsa
Ioannina
Preveza
*/