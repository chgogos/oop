// Δημιουργία 10 τυχαίων τιμών στο διάστημα (0,1)
// Έλεγχος αν κάθε μια από τις τιμές είναι μικρότερη του 0.85

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    time_t seed = time(NULL);
    srand(seed);
    for (int i = 0; i < 10; i++)
    {
        double r = double(rand()) / double(RAND_MAX);
        cout << boolalpha << r << " -> " << (r < 0.85) << endl;
    }
}

/*
0.921354 -> false
0.787133 -> true
0.0890225 -> true
0.8699 -> false
0.814875 -> true
0.575701 -> true
0.630299 -> true
0.581683 -> true
0.502762 -> true
0.552202 -> true
*/