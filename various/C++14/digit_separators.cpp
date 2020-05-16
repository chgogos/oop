#include <iostream>
#include <chrono>
#include <climits>
using namespace std;
using namespace chrono;

int main(){
    // digit separator (C++14)
    unsigned long long x1 = 10'000'000'000'000'000'000LLU;

    cout << x1 << endl;
    cout << numeric_limits<unsigned long long>::max() << endl;

    // chrono user defined literals
    std::chrono::milliseconds t1 = 200ms + 50s + 30min + 20h;
    cout << t1.count() << endl;
}