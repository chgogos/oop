#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    for (int i = 1; i <= 20; i++)
    {
        if(i%2==1){
            l.push_back(i);
        } else {
            l.push_front(i);
        }
    }
    for (int x : l)
    {
        cout << x << " ";
    }
}

/*
20 18 16 14 12 10 8 6 4 2 1 3 5 7 9 11 13 15 17 19 
*/