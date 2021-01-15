// Δημιουργία 10 τυχαίων τιμών στο διάστημα (0,1)
// Έλεγχος αν κάθε μια από τις τιμές είναι μικρότερη του 0.85

#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    long seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 engine(seed);
    uniform_real_distribution<double> dist(0, 1);

    for (int i = 0; i < 10; i++)
    {
        double r = dist(engine);
        cout << boolalpha << r << " -> " << (r < 0.85) << endl;
    }
}

/*
0.72969 -> true
0.0494494 -> true
0.885545 -> false
0.559611 -> true
0.370693 -> true
0.888679 -> false
0.80857 -> true
0.77264 -> true
0.219097 -> true
0.0575515 -> true
*/