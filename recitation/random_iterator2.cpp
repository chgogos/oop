// Εισάγετε σε ένα std::vector ακεραίων 10 τιμές.
// Διανύστε με random iterator το διάνυσμα αυξάνοντας την τιμή κάθε στοιχείου του κατά 1.
// Εμφανίστε το διάνυσμα.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int>::iterator itr = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        (*(itr + i))++;
    }

    for (int x : v)
    {
        cout << x << " ";
    }
}

/*
2 3 4 5 6 7 8 9 10 11
*/