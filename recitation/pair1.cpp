// Χρησιμοποιώντας std::pair για την αναπαράσταση ενός ζεύγους ακεραίων τιμών εισάγεται 5 ζεύγη τιμών σε ένα std::vector, 
// ταξινομήστε τα στοιχεία του με βάση το άθροισμα των στοιχείων κάθε ζεύγους και εμφανίστε τα ζεύγη.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<int, int>> v{{1, 2}, {4, 2}, {8, 3}, {5, 2}, {6, 1}};
    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y) { return x.first + x.second < y.first + y.second; });
    for (pair<int, int> p : v)
    {
        cout << p.first << "," << p.second << " -> " << p.first + p.second << endl;
    }
}

/*
1,2 -> 3
4,2 -> 6
5,2 -> 7
6,1 -> 7
8,3 -> 11
*/