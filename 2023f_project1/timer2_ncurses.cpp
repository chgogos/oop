#include <iostream>
#include <ctime>
#include <ncurses.h>

bool isPaused = false;

void togglePause() {
    isPaused = !isPaused;
}

int main() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);

    printw("Press 'p' to pause/resume or 'q' to exit the timer.");
    refresh();

    time_t startTime = time(nullptr);
    int duration = 120; // 2 minutes in seconds
    int elapsed = 0;

    while (elapsed < duration) {
        int ch = getch();
        if (ch == 'p' || ch == 'P') {
            togglePause();
        }
        else if (ch == 'q' || ch == 'Q') {
            break;
        }

        if (!isPaused) {
            clear();
            printw("Timer: %d seconds remaining.", duration - elapsed);
            refresh();
            napms(1000); // Sleep for 1 second
            elapsed = time(nullptr) - startTime;
        }
    }

    endwin();
    return 0;
}
