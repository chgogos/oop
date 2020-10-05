// Δημιουργία της συνάρτησης reverse που αντιστρέφει τα περιεχόμενα ενός vector. Η συνάρτηση είναι generic.
// Χρήση της συνάρτησης για αντιστροφή ενός vector ακεραίων, ενός vector λεκτικών και ενός vector με περιεχόμενα vectors ακεραίων

#include <iostream>
#include <vector>
#include <string>
#include <utility> //swap

using namespace std;

template <typename T>
void reverse(vector<T> &v)
{
    size_t left = 0;
    size_t right = v.size() - 1;
    while (left < right)
    {
        swap(v[left], v[right]);
        ++left;
        --right;
    }
}

int main()
{
    vector<int> vi = {1, 2, 3, 4, 5};
    vector<string> vs = {"christos", "vasilis", "spyros", "maria"};

    reverse(vi);
    for (auto x : vi)
    {
        cout << x << " ";
    }
    cout << endl;

    reverse(vs);
    for (auto x : vs)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<vector<int>> vvi = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    reverse(vvi);
    for (auto x : vvi)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
    }
    cout << endl;
}
