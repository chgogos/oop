// Γράψτε ένα πρόγραμμα που να ορίζει μια κλάση Α με ένα ιδιωτικό μέλος δεδομένων που να είναι δείκτης προς πίνακα ακεραίων. 
// Συμπληρώστε έναν κατασκευαστή αντιγραφής. 
// Χρησιμοποιήστε τον κατασκευαστή αντιγραφής στη main.

#include <iostream>

using namespace std;

class A
{
private:
    int n;
    int *data;

public:
    A(int n) : n(n), data(new int[n])
    {
        for (int i = 0; i < n; i++)
        {
            data[i] = i + 1;
        }
    }

    A(const A &obj) // deep copy
    {
        n = obj.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = obj.data[i];
        }
    }

    ~A()
    {
        delete[] data;
    }

    void info()
    {
        cout << "Object at " << this << " data at " << data << endl;
    }
};

int main()
{
    A obj1(5);
    A obj2(obj1);
    obj1.info();
    obj2.info();
}

/*
Object at 0x7afe00 data at 0x1c2450
Object at 0x7afdf0 data at 0x1c2470
*/