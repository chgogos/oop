// μετρά το πλήθος των γραμμών της εισόδου

// Μεταγλώττιση:
// g++ input2.cpp -o input2

// Τρέξιμο με τιμές που δίνει ο χρήστης μέχρι να εισάγει το κείμενο exit
//./input2

// Τρέξιμο με είσοδο δεδομένων το αρχείο input2.cpp
// ./input2 < input2.cpp

// pipe των περιεχομένων του input2.cpp στο ./input2
// cat input2.cpp | ./input2


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c = 0;
    string s;
    while (getline(cin, s)) // σταματά αν εισαχθεί Ctrl + D (linux) ή (Ctrl + Z) (windows)
    {
        // σταματά αν εισαχθεί το κείμενο exit
        if (s == "exit")
            break;
        c++;
    }
    cout << c << endl;
    return 0;
}
