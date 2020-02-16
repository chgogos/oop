// μετρά το πλήθος των λέξεων της εισόδου

// Μεταγλώττιση:
// g++ input1.cpp -o input1

// Τρέξιμο με τιμές που δίνει ο χρήστης μέχρι να εισάγει το κείμενο exit
//./input1

// Τρέξιμο με pipe δεδομένων
// echo this is a test | ./input1

// Τρέξιμο με είσοδο δεδομένων το αρχείο input1.cpp
// ./input1 < input1.cpp

// pipe των περιεχομένων του input1.cpp στο ./input1
// cat input1.cpp | ./input1

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c = 0;
    string s;
    while (cin >> s) // σταματά αν εισαχθεί Ctrl + D (linux) ή (Ctrl + Z) (windows)
    {
        // σταματά αν εισαχθεί το κείμενο exit
        if (s == "exit")
            break;
        c++;
    }
    cout << c << endl;
    return 0;
}
