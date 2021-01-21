// Δημιουργήστε μια κλάση Α με ένα ακέραιο ιδιωτικό μέλος x. 
// Συμπληρώστε μια φίλη συνάρτηση fun που να εκτυπώνει την τιμή του x για ένα αντικείμενο της κλάσης Α.

#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    A(int x) : x(x) {}

    friend void fun(A &a);
};

void fun(A &a)
{
    cout << a.x << endl;
}

int main()
{
    A obj(42);
    fun(obj);
}

/*
42
*/