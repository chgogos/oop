// πειραγμένο νόμισμα

#include <iostream>
#include <random>
#include <ctime>

#define TRIES 1000000

using namespace std;

unsigned int flip(float p)
{
    double x = (double)rand() / (double)RAND_MAX;
    if (x < p)
        return 1;
    else
        return 0;
}

int main()
{
    srand(time(NULL));
    int h = 0, t = 0;
    for (int i = 0; i < TRIES; i++)
    {
        if (flip(0.6))
            h++;
        else
            t++;
    }
    cout << "HEADS=" << h << " " << 100 * (double)h / (double)TRIES << " TAILS="
         << t << " " << 100 * (double)t / (double)TRIES << endl;
}