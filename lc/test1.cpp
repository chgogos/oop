// templated συνάρτηση που να δέχεται έναν πίνακα 5 θέσεων με στοιχεία τύπου Τ
// και ένα στοιχείο προς αναζήτηση και να επιστρέφει πόσες φορές υπάρχει το
// στοιχείο στον πίνακα

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int my_fun(vector<T> a, T key)
{
    int c = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == key)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    vector<int> a = {2, 3, 2, 2, 4, 5, 7, 8, 9, 2};
    a.push_back(7);
    int res = my_fun(a, 2);
    cout << res << endl;

    vector<double> b = {2.1, 3.2, 2.1, 2.4, 4.5};
    res = my_fun(b, 2.1);
    cout << res << endl;
}
