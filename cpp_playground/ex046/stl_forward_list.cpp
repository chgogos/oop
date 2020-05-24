#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> a_list{1, 3, 5, 7, 9};

    // εισαγωγή στην αρχή της λίστας
    a_list.push_front(2);

    // εισαγωγή μετά το στοιχείο στο οποίο δέχνει ο iterator
    auto itr = a_list.begin();
    itr++;
    a_list.insert_after(itr, 50);

    for (auto x : a_list)
        cout << x << " ";
    cout << endl;

    // ταξινόμηση
    a_list.sort();
    for (auto x : a_list)
        cout << x << " ";
    cout << endl;

    // αντιστροφή
    a_list.reverse();

    // διαγραφή άρτιων τιμών
    a_list.remove_if([](int x){return x%2==0;});
    for (auto x : a_list)
        cout << x << " ";
    cout << endl;
}

/*
2 1 50 3 5 7 9
1 2 3 5 7 9 50
9 7 5 3 1
*/