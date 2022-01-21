// Εισάγετε σε ένα std::vector όλες τις ακέραιες τιμές από το 1 μέχρι και το 10.
// Να γίνει αύξηση κάθε τιμής κατά 1 με χρήση iterator
// Εμφανίστε με range based for το περιεχόμενο του διανύσματος σε μια γραμμή.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator itr;
    for (itr = v.begin(); itr < v.end(); itr++)
    {
        (*itr)++;
    }

    for (const int &x : v)
    {
        cout << x << " ";
    }
}

/*
2 3 4 5 6 7 8 9 10 11 
*/