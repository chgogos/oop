// Εισάγετε 10 ακέραιες τιμές σε ένα std::set. Εμφανίστε ταξινομημένες τις τιμές.
// Πόσες τιμές εμφανίζονται;

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a_set;
    for (int x : {3, 2, 4, 5, 6, 1, 8, 4, 5, 2})
    {
        a_set.insert(x);
    }
    for (const int &x : a_set)
    {
        cout << x << " ";
    }
}

/*
1 2 3 4 5 6 8 

το std::set δεν διατηρεί διπλότυπα
*/