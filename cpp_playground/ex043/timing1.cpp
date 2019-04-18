#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::literals::chrono_literals; // C++14

    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(1s); // chrono_literals

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end-start;
    std::cout << "Time passed: " << duration.count() << std::endl;

    return 0;
}