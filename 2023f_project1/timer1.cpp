/* 
ChatGPT prompt: 
Write a C++ program that shows a timer for 2 minutes. 
The screen should be refreshed every second. 
The program should work in Windows and in Linux.
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void clearScreen() {
    // Clear the console screen
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    // Set the duration for 2 minutes
    auto duration = std::chrono::minutes(2);
    auto start_time = std::chrono::system_clock::now();
    
    while (true) {
        clearScreen();
        
        auto current_time = std::chrono::system_clock::now();
        auto elapsed_time = std::chrono::duration_cast<std::chrono::seconds>(current_time - start_time);
        
        if (elapsed_time >= duration) {
            std::cout << "Time's up!" << std::endl;
            break;
        }
        
        auto remaining_time = duration - elapsed_time;
        int seconds = static_cast<int>(remaining_time.count());
        
        int minutes = seconds / 60;
        seconds %= 60;
        
        std::cout << "Time remaining: " << minutes << " minutes " << seconds << " seconds" << std::endl;
        
        // Sleep for 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
