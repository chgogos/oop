// μετρά το πλήθος των λέξεων της εισόδου και το πλήθος των χαρακτήρων που συνολικά έχουν οι λέξεις

// Τρέξιμο με τιμές που έχουν καταγραφεί σε ένα αρχείο (input.txt)
//./input3

#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int words = 0;
    int chars = 0;
    string s;
    while (cin >> s)
    {
        cout << s << " ";
        words++;
        chars += s.length();
    }
    cout << endl << "words=" << words << " characters=" << chars << endl;
    return 0;
}

/*
this is a dummy text used as input this is another dummy text used as input this is yet another dummy text used as input 
words=25 characters=96
*/