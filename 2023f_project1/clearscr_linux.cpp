#include <termios.h>
#include <unistd.h>
#include <iostream>

using namespace std;

void enableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echoing
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void disableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= (ICANON | ECHO); // Re-enable canonical mode and echoing
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

int main(){
    enableRawMode(); // Disable echo
    cout << "Press any key to clear screen" << endl;
    char c = cin.get();
    cout << "\033[2J\033[1;1H"; // Clear screen
    cout << "Screen cleared" << endl;
    cout << "You pressed " << c << endl; 
    disableRawMode(); // Enable echo
    return 0;
}