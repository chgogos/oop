#include <iostream>

class Circle
{
public:                       // διεπαφή (interface)
    void SetRadius(double r); // θέτει το μέλος δεδομένων radius στην τιμή r
    double AreaOf();          // επιστρέφει το εμβαδόν του κύκλου
private:
    double radius; // ακτίνα του κύκλου
};

// υλοποιήσεις συναρτήσεων μελών
void Circle::SetRadius(double r)
{
    radius = r;
}
double Circle::AreaOf()
{
    return (3.14 * radius * radius);
}

using namespace std;

int main()
{
    Circle C1;
    Circle C2;

    C1.SetRadius(1);
    C2.SetRadius(10);

    cout << "The area of C1 is " << C1.AreaOf() << endl;
    cout << "The area of C2 is " << C2.AreaOf() << endl;

    C1.SetRadius(2);
    C2.SetRadius(3);

    cout << "The area of C1 is " << C1.AreaOf() << endl;
    cout << "The area of C2 is " << C2.AreaOf() << endl;

    return 0;
}

/*
output:
The area of C1 is 3.14
The area of C2 is 314
The area of C1 is 12.56
The area of C2 is 28.26
*/