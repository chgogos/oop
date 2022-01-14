// Εισάγετε σε ένα std::vector όλες τις άρτιες τιμές από το 0 μέχρι και το 100.
// Εμφανίστε με range based for το περιεχόμενο του διανύσματος σε μια γραμμή.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i <= 100; i += 2)
    {
        v.push_back(i);
    }

    for (const int &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

/*
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 
*/