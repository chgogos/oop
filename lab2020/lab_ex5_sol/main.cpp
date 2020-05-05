#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main()
{
    linked_list ll;
    int a[] = {70, 22, 16, 78, 11, 90, 23};
    cout << "CHECK 1 [push_front]" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        ll.push_front(a[i]);
    ll.print();

    cout << "CHECK 2 [length + sum]" << endl;
    cout << "LENGTH " << ll.length() << endl;
    cout << "SUM    " << ll.sum() << endl;

    cout << "CHECK 3 [erase_front]" << endl;
    ll.erase_front();
    ll.print();

    cout << "CHECK 4 [push_back]" << endl;
    ll.push_back(10);
    ll.print();

    cout << "CHECK 5 [bubble_sort]" << endl;
    ll.bubble_sort();
    ll.print();

    std::cout << "CHECK 6 [copy constructor]" << std::endl;
    linked_list ll2(ll);
    ll2.print();

    // άσκηση 5 6/5/2020 (επιπλέον ερωτήματα)

    std::cout << "CHECK 7 [delete_at_position 3]" << std::endl;
    ll.delete_at_position(3);
    ll.print();

    std::cout << "CHECK 8 [insert_at_position 3 value 54]" << std::endl;
    ll.insert_at_position(3, 54);
    ll.print();

    std::cout << "CHECK 9 [reverse]" << std::endl;
    ll.reverse();
    ll.print();
}

/*
CHECK 1 [push_front]
23 90 11 78 16 22 70
CHECK 2 [length + sum]
LENGTH 7
SUM    310
CHECK 3 [erase_front]
90 11 78 16 22 70
CHECK 4 [push_back]
90 11 78 16 22 70 10
CHECK 5 [bubble_sort]
10 11 16 22 70 78 90
CHECK 6 [copy constructor]
10 11 16 22 70 78 90
CHECK 7 [delete_at_position 3]
10 11 16 70 78 90
CHECK 8 [insert_at_position 3 value 54]
10 11 16 54 70 78 90
CHECK 9 [reverse]
90 78 70 54 16 11 10
*/