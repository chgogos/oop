#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 engine{rd()};
    uniform_real_distribution<double> distribution(0.0, 1.0);

    for (int i = 0; i < 10; i++)
    {
        double r = distribution(engine);
        cout << r << endl;
    }
}