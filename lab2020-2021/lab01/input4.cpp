// https://stackoverflow.com/questions/35796410/can-i-redirect-an-ifstream-to-cin/35796822

// μετρά το πλήθος των λέξεων της εισόδου και το πλήθος των χαρακτήρων που συνολικά έχουν οι λέξεις

// Τρέξιμο με τιμές που έχουν καταγραφεί σε ένα αρχείο (input.txt)
//./input3

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string fn = "input.txt";
    ifstream file(fn);
    if (file.is_open())
    {
        cin.rdbuf(file.rdbuf()); // swap pointers to std::streambuf
    }
    else
    {
        cerr << "unable to open file:" << fn << endl;
        exit(-1);
    }
    int words = 0;
    int chars = 0;
    string s;
    while (cin >> s)
    {
        cout << s << " ";
        words++;
        chars += s.length();
    }
    cout << "\nwords=" << words << " characters=" << chars << endl;
    return 0;
}

/*
this is a dummy text used as input this is another dummy text used as input this is yet another dummy text used as input 
words=25 characters=96
*/