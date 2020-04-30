#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "greek");
    string line;
    ifstream fin;
    fin.open("test_windows1253.txt", ios::in);
    while (getline(fin, line))
    {
        cout << line << endl;
    }
}
