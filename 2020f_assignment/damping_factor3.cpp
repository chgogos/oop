// Δημιουργία 10 τυχαίων τιμών επιλέγοντας με πιθανότητα 15% το 0 και με 85% το 1

#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    long seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 engine(seed);
    discrete_distribution<int> dist{15,85}; // 15% πιθανότητα για 0 (false), 85% πιθανότητα για 1 (true)

    for (int i = 0; i < 10; i++)
    {
        bool r = dist(engine);
        cout << boolalpha << r << endl;
    }
}

/*
true
false
true
true
true
true
true
true
false
true
*/