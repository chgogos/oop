#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cout << "Enter size of array: ";
    cin >> N;
    int *p = NULL;
    p = new int[N]; // heap (σωρός)
    for (int i = 0; i < N; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < N; i++)
    {
        cout << p[i] << endl;
    }
    delete[] p;

    // ---- NOT OK (run it on cpptutor) ----

    int a[N]; // stack (στοίβα)
    for (int i = 0; i < N; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
}
