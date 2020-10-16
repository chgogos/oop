#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x; // αν ο χρήστης εισάγει κείμενο αντί για αριθμό η cin.fail() επιστρέφει true
    if (cin.fail())
    {
        cerr << "Bad input" << endl;
        exit(-1);
    }
    cout << x << endl;

}

/*
Enter a number: five
Bad input
*/