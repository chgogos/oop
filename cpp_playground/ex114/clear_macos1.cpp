#include <iostream>
#include <termios.h>
#include <unistd.h>

using namespace std;

void setEcho(bool enable) {
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    if (!enable) {
        tty.c_lflag &= ~ECHO;
    } else {
        tty.c_lflag |= ECHO;
    }
    (void) tcsetattr(STDIN_FILENO, TCSANOW, &tty);
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
