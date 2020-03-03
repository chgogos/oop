// Παράδειγμα με copy constructor και στατική μεταβλητή κλάσης
// Δημιουργία επιπλέον αντικειμένων στηβ μνήμη λόγω του περάσματος με τιμή

#include <iostream>
#include <vector>
using namespace std;

class A
{
private:
    int x;

public:
    static int count; // η στατική μεταβλητή count ανήκει στην κλάση A, αν δεν είναι const αρχικοποιείται εκτός κλάσης
    A()
    {
        x = ++count;
        cout << "object " << x << " created at memory " << this << endl;
    }
    A(const A &obj) : x(obj.x) // copy constructor
    {
        x = ++count;
        cout << "copy of object " << x << " created at memory " << this << endl;
    }
    ~A()
    {
        cout << "object " << x << " destroyed from " << this << endl;
    }
};

int A::count = 0; // αρχικοποίηση στατικής μεταβλητής κλάσης A

void fun_pbv(A a){
    // do nothing
}

void fun_pbr(const A &a){
    // do nothing
}

int main()
{
    vector<A> v(2);

    for (A a : v)
    {
        fun_pbv(a);
    }

    // for (A &a : v)
    // {
    //     fun_pbr(a);
    // }
}