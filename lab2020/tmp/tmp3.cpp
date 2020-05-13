#include <iostream>
#include <vector>

using namespace std;

// επιστροφή του πλήθους των εμφανίσεων της μικρότερης τιμής
template <class T>
void occurences(vector<T> v, int &c, T &min)
{
    min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
            min = v[i];
    }
    c=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == min)
            c++;
    }
}

int main()
{
    vector<int> v1{2, 6, 9, 2, 3, 2, 9, 2};
    int c1, min1; 
    occurences(v1, c1, min1);
    cout << "Min: "<< min1 <<" occurs: " << c1 << endl;

    vector<double> v2{2.1, 6.3, 1.1, 2.1, 1.1, 2.0, 9.1, 2.5};
    int c2;
    double min2; 
    occurences(v2, c2, min2);
    cout << "Min: "<< min2 <<" occurs: " << c2 << endl;
}