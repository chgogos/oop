#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
    cout << "vowels = " << vowels << '\n'; // is this a c-string?

    char temperatureScales[3] = {'K', 'F', 'C'};
    cout << "temperatureScales = " << temperatureScales << '\n';

    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    cout << "digits = " << digits << '\n';
}

/*
vowels = AEIOU0o
temperatureScales = KFCAEIOU0o
digits = 0123456789KFCAEIOU0o
*/