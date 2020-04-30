#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    string line;
    ifstream fin;
    fin.open("test_UTF8.txt", ios::in);
    while (getline(fin, line))
    {
        cout << line << endl;
    }
}
