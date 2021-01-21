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

    // range based for
    for (auto& x : v)
    {
        x++;
        cout << x << " ";
    }
    
    cout << endl;

    for (auto x : v)
    {
        cout << x << " ";
    }

}