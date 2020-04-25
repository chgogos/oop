#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{2,4,2,5,2,5,6,2};
    int twos = 0;
    int const target = 2;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            twos++;
        }
    }
    cout << "Twos = " << twos << endl;

    // using member functions of vector objects
    twos = count(v.begin(), v.end(), target);
    cout << "Twos = " << twos << endl;

    // using non member functions of vector objects (λειτουργεί και με c-style πίνακες)
    twos = count(begin(v), end(v), target);
    cout << "Twos = " << twos << endl;
}
