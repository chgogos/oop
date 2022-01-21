// Εισάγετε 10 ακέραιες τιμές σε ένα std::vector. 
// Εμφανίστε το άθροισμα των 5 μεγαλύτερων τιμών.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{3, 1, 6, 7, 2, 4, 5, 8, 9, 4};
    sort(v.begin(), v.end(), less<int>());
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += v[i];
    }
    cout << "TOP 5 TOTAL=" << sum << endl;
}

/*
TOP 5 TOTAL=35
*/