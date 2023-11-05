#include <iostream>
#include <windows.h>

using namespace std;

void setEcho(bool enable) {
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);

    if (!enable) {
        mode &= ~ENABLE_ECHO_INPUT;
    } else {
        mode |= ENABLE_ECHO_INPUT;
    }

    SetConsoleMode(hStdin, mode);
}

int main() {
    cout << "This is some text" << endl;

    setEcho(false); // Disable echo
    getchar(); // Wait for user to press a key
    setEcho(true); // Enable echo

    cout << "\033[2J\033[1;1H";
    cout << "This is some text" << endl;

    return 0;
}
