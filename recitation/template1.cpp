// Κατασκευάστε μια συνάρτηση που να δέχεται ως παραμέτρους έναν πίνακα και το μέγεθος του και θα επιστρέφει τη μεγαλύτερη τιμή του πίνακα. 
// Ο τύπος των στοιχείων που θα περιέχει ο πίνακας θα ορίζεται κατά την κλήση της συνάρτησης. 
// Πραγματοποιήστε κλήση της συνάρτησης για έναν πίνακα ακεραίων, για έναν πίνακα πραγματικών και για έναν πίνακα λεκτικών.

#include <iostream>
#include <cassert>

using namespace std;

template <class T>
T fun(T a[], int N)
{
    assert(N > 0); // defensive programming
    T min = a[0];
    for (int i = 1; i < N; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int a[] = {3, 2, 5, 1};
    double b[] = {7.1, 8.2, 6.5, 9.1};
    char c[] = {'c', 'f', 'a', 'd'};

    cout << fun(a, 4) << endl;
    cout << fun(b, 4) << endl;
    cout << fun(c, 4) << endl;
}

/*
1
6.5
a
*/