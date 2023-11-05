#include <iostream>
#include <termios.h>
#include <unistd.h>

void enableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echoing
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void disableRawMode() {
    termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= (ICANON | ECHO); // Enable canonical mode and echoing
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

int main() {
    std::cout << "This is some text" << std::endl;

    enableRawMode();
    std::cin.get(); // Wait for user to press a key without needing to press enter
    disableRawMode();

    std::cout << "\033[2J\033[1;1H"; // Clear screen and move cursor to home position
    std::cout << "This is some text" << std::endl;

    return 0;
}
