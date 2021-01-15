#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (list<int>::iterator itr = l.begin(); itr != l.end();)
    {
        if (*itr % 2 == 0)
        {
            itr=l.erase(itr);
        } else {
            itr++;
        }
    }

    for (int x : l)
    {
        cout << x << " ";
    }
}

/*
1 3 5 7 9 
*/