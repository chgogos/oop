// Για όλες τις ακέραιες τιμές από το 1 μέχρι και το 20 εισάγετε τις τιμές εναλλάξ την μια στην αρχή και την άλλη στο τέλος ενός std::list. 
// Εμφανίστε τη λίστα.

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    for (int i = 1; i <= 20; i++)
    {
        if(i%2==1){
            l.push_front(i);
        } else {
            l.push_back(i);
        }
    }
    for (int x : l)
    {
        cout << x << " ";
    }
}

/*
19 17 15 13 11 9 7 5 3 1 2 4 6 8 10 12 14 16 18 20 
*/