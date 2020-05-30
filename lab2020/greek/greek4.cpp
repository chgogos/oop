#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string name1;
    cout << "ΠΩΣ ΣΕ ΛΕΝΕ; ";
    cin >> name1;
    cout << "ΓΕΙΑ ΣΟΥ " << name1 << endl; // δεν λειτουργεί με Ελληνικά
}

/*
Windows
#############################
ΠΩΣ ΣΕ ΛΕΝΕ; ΣΩΚΡΑΤΗΣ
ΓΕΙΑ ΣΟΥ
*/