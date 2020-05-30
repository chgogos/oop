#include <iostream>

using namespace std;

int main()
{
    string str1("Ελληνικά");
    cout << str1 << " " << str1.size() * sizeof(char) << endl;
    wstring str2(L"Ελληνικά");
    wcout << str2 << str2.size() * sizeof(wchar_t) << endl;
}

/*
Windows
#################################
╬Χ╬╗╬╗╬╖╬╜╬╣╬║╬υ 16
*/