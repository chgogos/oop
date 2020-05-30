#include <iostream>
#include <conio.h> 

using namespace std;

int main()
{
    wstring str1 (L"abcdefghijklmnopqrstuvwxyz");
    wcout << str1 << endl; 
    wstring str2 (L"αβγδεζηθιξλμνξοπρστυφχψω");
    // wcout << str2 << endl; // δεν λειτουργεί για ελληνικά
    _cputws(str2.c_str()); // η εμφάνιση ελληνικών γίνεται έτσι
    cout << endl << str2.size() * sizeof(wchar_t) << endl; 
}

/*
Windows
###########################
abcdefghijklmnopqrstuvwxyz
αβγδεζηθιξλμνξοπρστυφχψω
48
*/