// Εισάγετε 10 ακέραιες τιμές σε ένα std::unordered_set. Εμφανίστε ταξινομημένες τις τιμές. 
// Πόσες τιμές εμφανίζονται;

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unordered_set<int> a_set;
    for (int x : {3, 2, 4, 5, 6, 1, 8, 4, 5, 2})
    {
        a_set.insert(x);
    }

    vector<int> v;
    for (int x : a_set)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }
}

/*
1 2 3 4 5 6 8 

το std::unordered_set δεν διατηρεί διπλότυπα, και δεν παρέχει εγγύηση για τη σειρά των στοιχείων που περιέχει
*/