// Υπερφόρτωση (overload) της συνάρτησης fun
// Η συνάρτηση fun μπορεί να κληθεί
// α) με 1 ακέραιο όρισμα
// β) με 1 πραγματικό όρισμα
// γ) με 1 ακέραιο και 1 πραγματικό όρισμα

#include <iostream>

using namespace std;

void fun(int x)
{
    cout << x << endl;
}

void fun(double x)
{
    cout << x << endl;
}

void fun(int x, double y)
{
    cout << x << " " << y << endl;
}

int main()
{
    fun(5);
    fun(3.14);
    fun(5, 3.14);
}

// 5
// 3.14
// 5 3.14
