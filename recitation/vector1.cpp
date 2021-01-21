// Εισάγετε σε ένα std::vector όλες τις άρτιες τιμές από το 0 μέχρι και το 100. 
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

    for (int x : v)
    {
        cout << x << " ";
    }
}

/*
2 3 4 5 6 7 8 9 10 11 
*/