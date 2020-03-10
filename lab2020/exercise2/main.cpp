#include "linked_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    cout << "CHECK 1" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        ll.push_front(a[i]);
    ll.print();

    cout << "CHECK 2" << endl;
    cout << "LENGTH " << ll.length() << endl;
    cout << "SUM    " << ll.sum() << endl;

    cout << "CHECK 3" << endl;
    ll.erase_front();
    ll.print();

    cout << "CHECK 4" << endl;
    ll.push_back(10);
    ll.print();
    
    cout << "CHECK 5" << endl;
    ll.bubble_sort();
    ll.print();

    std::cout << "CHECK 6" << std::endl;
    linked_list ll2(ll);
    ll2.print();
}
