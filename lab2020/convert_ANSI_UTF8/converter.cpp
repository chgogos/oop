// https://docs.microsoft.com/en-us/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar

// windows 1253 --> UTF8
// UTF8 --> windows 1253

#include <iostream>
#include <string>
#include <fstream>
#include <stringapiset.h>

using namespace std;

void convert_ansi_to_utf8(string ansi_input, string utf_output)
{
    string line;
    ifstream ifs;
    ofstream ofs;
    ifs.open(ansi_input, ios::in);
    ofs.open(utf_output, ios::out);
    while (getline(ifs, line))
    {
        const int SIZE = 1024;
        char *text = new char[SIZE];
        WCHAR *w = new WCHAR[SIZE];
        strcpy(text, line.c_str());
        int erg = MultiByteToWideChar(CP_ACP, 0, text, -1, w, SIZE); // ANSI to UNICODE
        erg=WideCharToMultiByte(CP_UTF8, 0, w, -1, text, SIZE, 0, 0); // UNICODE to UTF-8
        ofs << text << endl;
    }
    ifs.close();
    ofs.close();
}

void convert_utf8_to_ansi(string utf_input, string ansi_output)
{
    string line;
    ifstream ifs;
    ofstream ofs;
    ifs.open(utf_input, ios::in);
    ofs.open(ansi_output, ios::out);
    while (getline(ifs, line))
    {
        char *text = new char[1024];
        WCHAR *w = new WCHAR[1024];
        strcpy(text, line.c_str());
        int erg = MultiByteToWideChar(CP_UTF8, 0, text, -1, w, 1024); // UTF-8 to UNICODE
        erg=WideCharToMultiByte(CP_ACP, 0, w, -1, text, 1024, 0, 0); // UNICODE to ANSI
        ofs << text << endl;
    }
    ifs.close();
    ofs.close();
}

int main()
{
    convert_ansi_to_utf8("input_windows_1253.txt", "output_utf8.txt");
    convert_utf8_to_ansi("input_utf8.txt", "output_windows_1253.txt");
}