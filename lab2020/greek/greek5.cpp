//  https://stackoverflow.com/questions/40407830/reading-cyrillic-from-console-c/40408035

#include <iostream>
#include <string>
#include <io.h> //for _setmode
#include <fcntl.h> //for _O_U16TEXT

int main() 
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    std::wcout << L"ΠΩΣ ΣΕ ΛΕΝΕ; ";

    std::wstring str;
    std::wcin >> str;
    std::wcout << L"ΓΕΙΑ ΣΟΥ " << str << "\n";

    return 0;
}

/*
ΠΩΣ ΣΕ ΛΕΝΕ; ΣΩΚΡΑΤΗΣ
ΓΕΙΑ ΣΟΥ ΣΩΚΡΑΤΗΣ
*/