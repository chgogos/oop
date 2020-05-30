// http://www.cplusplus.com/forum/beginner/195685/

#include <iostream>
#include <string>
#ifdef _MSC_VER
#include <io.h>
#include <fcntl.h>
#else
#include <locale>
#include <clocale>
#endif

int main()
{
#ifdef _MSC_VER
        _setmode(_fileno(stdout), _O_WTEXT);
        _setmode(_fileno(stdin), _O_WTEXT);
#else
        std::setlocale(LC_ALL, "Greek");
        std::cout.imbue(std::locale());
        std::cin.imbue(std::locale());
#endif
        std::wstring b = L"αβγδεζηθιξλμνξοπρστυφχψω"; //Greek Alphabet
        std::wstring c = L"abcdefghijklmnopqrstuvwxyz"; //Latin Alphabet
        std::wcout << b << '\n' << c << '\n';
        std::wcout << L"ΠΩΣ ΣΕ ΛΕΝΕ; "; // What is your name?
        std::wstring name;
        std::wcin >> name;
        std::wcout << L"ΓΕΙΑ ΣΟΥ " << name << '\n'; // Hello, <name>
}

/*
Windows
#############################
αβγδεζηθιξλμνξοπρστυφχψω
abcdefghijklmnopqrstuvwxyz
ΠΩΣ ΣΕ ΛΕΝΕ; ΣΩΚΡΑΤΗ
ΓΕΙΑ ΣΟΥ ???????
*/