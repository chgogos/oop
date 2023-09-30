#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    auto lambda = [](int x) { cout << x * x << endl; };
    vector<int> v{1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), lambda);

    // διπλασιασμός κάθε στοιχείου του vector με for_each (1 γραμμή)
    for_each(v.begin(), v.end(), [](int &x) {x=3*x;});

    cout << "####################" << endl;
    for (int x : v) // range based for
    {
        cout << x << endl;
    }
    
    cout << "####################" << endl;
    // count_if (καταμέτρηση των περιττών αριθμών του vector)
    int c = count_if(v.begin(), v.end(), [](int x){return x%2==1;});
    cout << c << endl;
    
    cout << "####################" << endl;
    // count_if (καταμέτρηση των τιμών που είναι > 5)
    c = count_if(v.begin(), v.end(), [](int x){return x>5;});
    cout << c << endl;
}
