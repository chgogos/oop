// Παράδειγμα με copy constructor και στατική μεταβλητή κλάσης
// Δημιουργία επιπλέον αντικειμένων στη μνήμη λόγω του περάσματος με τιμή

#include <iostream>
#include <vector>
using namespace std;

class A
{
private:
    int x;

public:
    static int count; /* η στατική μεταβλητή count ανήκει στην κλάση A, 
                      αν δεν είναι const αρχικοποιείται εκτός κλάσης */
    A()
    {
        x = ++count;
        cout << "object " << x << " constructed at memory " << this << endl;
    }
    A(const A &obj) : x(obj.x) // copy constructor
    {
        x = ++count;
        cout << "copy of object " << x << " constructed at memory " << this << endl;
    }
    ~A()
    {
        cout << "object " << x << " destructed from memory " << this << endl;
    }
};

int A::count = 0; // αρχικοποίηση στατικής μεταβλητής κλάσης A

void fun_pbv(A a)
{
    // do nothing
}

void fun_pbr(const A &a)
{
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

/* έξοδος
object 1 constructed at memory 0x1b1320
object 2 constructed at memory 0x1b1324
copy of object 3 constructed at memory 0x62fddc
copy of object 4 constructed at memory 0x62fe04
object 4 destructed from memory 0x62fe04
object 3 destructed from memory 0x62fddc
copy of object 5 constructed at memory 0x62fddc
copy of object 6 constructed at memory 0x62fe04
object 6 destructed from memory 0x62fe04
object 5 destructed from memory 0x62fddc
object 1 destructed from memory 0x1b1320
object 2 destructed from memory 0x1b1324
*/