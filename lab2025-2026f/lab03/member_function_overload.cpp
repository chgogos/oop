// Υπερφόρτωση (overload) της συνάρτησης μέλους A::fun
// Η συνάρτηση fun μπορεί να κληθεί
// α) με 1 ακέραιο όρισμα
// β) με 1 πραγματικό όρισμα
// γ) με 1 ακέραιο και 1 πραγματικό όρισμα

#include <iostream>

using namespace std;

class A
{
public:
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
};

int main()
{
    A obj;
    obj.fun(5);
    obj.fun(3.14);
    obj.fun(5, 3.14);
}

// 5
// 3.14
// 5 3.14
