#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    // άθροισμα όλων των τιμών του διανύσματος
    int sum1 = accumulate(begin(v), end(v), 0);
    cout << sum1 << endl;

    // άθροισμα όλων των περιττών του διανύσματος
    int sum2 = accumulate(begin(v),
                          end(v),
                          0,
                          [](int total, int x) {
                              if (x % 2 == 0)
                                  return total;
                              else
                                  return total + x;
                          });
    cout << sum2 << endl;

    vector<string> v2{"one", "two", "three"};
    cout << accumulate(begin(v2), end(v2), string{}) << endl;
}

/*
15
9
onetwothree
*/