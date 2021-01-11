#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    void foo() const // η συνάρτηση foo δεν επιτρέπεται να αλλάζει μέλη δεδομένων της Α
    {
        // x++; // error: increment of member 'A::x' in read-only object
    }
};

void bar(const int &a) // το a περνά με αναφορά αλλά δεν μπορεί να αλλάξει μέσα στην fun
{
    // a++; // error: increment of read-only reference 'a'
}

int main()
{
    const int x = 5; // η τιμή του x δεν μπορεί να αλλάξει
    // x++; // error: increment of read-only variable 'x'
    int y = 1;
    bar(y);
}
