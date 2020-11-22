#include <iostream>

using namespace std;

class A
{
public:
    virtual void fun() = 0;
};
class B : public A
{
public:
    void fun()
    {
        cout << "B::fun()" << endl;
    }
};

class C
{
public:
    const int x;
    C() : x(0) {}
    void xplus2()
    {
        *const_cast<int *>(&x) *= 2;
    }
};

int main()
{
    //const_cast: χρησιμοποιείται για να αφαιρεθεί ο const περιορισμός από έναν δείκτη
    const int x1 = 5;
    int *p = const_cast<int *>(&x1);
    *p = 10; // δεν αλλάζει η τιμή του x1
    cout << "1. \n"
         << x1 << " " << *p << endl; // 5 10

    C obj;
    obj.xplus2();
    cout << obj.x << endl; // 0

    // static_cast: κάνει ότι και το C-style casting (π.χ. μετατροπή float σε int)
    float x2 = 3.141529;
    int x3 = static_cast<int>(x2);
    cout << "2. \n"
         << x3 << endl; // 3

    // reinterpet_cast: χρησιμοποιείται για μετατροπές δεικτών
    A *po1 = new B;
    B *po2 = reinterpret_cast<B *>(po1);
    cout << "3. \n";
    po1->fun(); // B::fun()
    po2->fun(); // B::fun()

    // dynamic_cast: χρησιμοποιείται για μετατροπές δεικτών κάνοντας έλεγχο ότι η μετατροπή είναι έγκυρη
    A *po3 = new B;
    B *po4 = dynamic_cast<B *>(po3); // πρέπει η A να είναι abstract για να επιτρέπεται το dynamic_cast
    cout << "4. \n";
    po3->fun(); // B::fun()
    po4->fun(); // B::fun()
}
