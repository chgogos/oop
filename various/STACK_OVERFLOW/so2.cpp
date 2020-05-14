// https://stackoverflow.com/questions/11523569/how-can-i-avoid-char-input-for-an-int-variable

#include <iostream>
#include <climits> // for INT_MAX limits
using namespace std;
int main()
{
    int num;
    cout << "Enter a number.\n";
    cin >> num;
    // input validation
    while (cin.fail())
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "You can only enter numbers.\n";
        cout << "Enter a number.\n";
        cin >> num;
    }
}

/*
Enter a number.
abcdef
You can only enter numbers.
Enter a number.
1
*/