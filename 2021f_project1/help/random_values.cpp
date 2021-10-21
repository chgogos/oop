#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    unsigned int seed = chrono::steady_clock::now().time_since_epoch().count();
    auto rng = default_random_engine{seed};
    uniform_int_distribution<int> dist(1, 6);
    uniform_real_distribution<double> dist2(0, 1);

    // 10 τυχαίοι ακέραιοι από το 1 μέχρι και το 6
    for (int i = 0; i < 10; i++)
    {
        cout << dist(rng) << " ";
    }
    cout << endl;

    // 10 τυχαίες πραγματικές τιμές από το 0 μέχρι το 1
    for (int i = 0; i < 10; i++)
    {
        cout << dist2(rng) << " ";
    }
    cout << endl;

}