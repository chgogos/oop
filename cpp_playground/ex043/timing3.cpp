#include <iostream>
#include <chrono>
#include <thread>

using namespace std::literals::chrono_literals; // C++14

int main()
{
    srand(time(NULL));
    //  κάθε επανάληψη θα διαρκέσει τουλάχιστον 2 seconds
    for (int i = 0; i < 5; i++)
    {
        auto start = std::chrono::steady_clock::now();
        auto future_time = start + 2s;

        int st = rand() % 5; // τυχαίος ακέραιος από το 0 μέχρι το 4
        std::chrono::seconds sleep_time(st);
        std::cout << "Sleep for " << st << " seconds" << std::endl;
        std::this_thread::sleep_for(sleep_time);

        std::this_thread::sleep_until(future_time); // θα περιμένει σε αυτό το σημείο μέχρι να περάσουν τουλάχιστον 2 sec

        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<float> duration = end - start;
        std::cout << "Time passed: " << duration.count() << std::endl;
    }

    return 0;
}