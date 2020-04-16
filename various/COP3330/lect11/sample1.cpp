#include <iostream>

using namespace std;

int sum(int A[], int beg, int end)
{
    if (beg > end)
        return 0;
    return A[beg] + sum(A, beg + 1, end);
}

main()
{
    int X[4] = {10, 20, 30, 40};

    cout << "Sum of {10, 20, 30, 40} is " << sum(X, 0, 3) << endl;
}

/*
Sum of {10, 20, 30, 40} is 100
*/