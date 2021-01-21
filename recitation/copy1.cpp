// Εισάγετε 10 ακέραιες τιμές σε ένα std::vector. 
// Αντιγράψτε τις 5 πρώτες τιμές σε ένα άλλο std::vector.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{3, 1, 6, 7, 2, 4, 5, 8, 9, 4};
    vector<int> v2(5);
    copy(v.begin(), v.begin()+5, v2.begin());
    for(int x: v2){
        cout << x << " ";
    }
}

/*
3 1 6 7 2 
*/