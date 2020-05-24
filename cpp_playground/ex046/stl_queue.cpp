#include <iostream>
#include <queue>
#include <deque>
#include <list>
using namespace std;

int main()
{
    queue<int> a_queue;
    // queue<int, deque<int>> a_queue; // ίδιο με το παραπάνω
    // queue<int, list<int>> a_queue;
    for (int x : {1, 2, 3, 4, 5})
    {
        a_queue.push(x);
        cout << "QUEUE SIZE:" << a_queue.size() << " FRONT:" << a_queue.front() << " BACK:" << a_queue.back() << endl;
    }

    cout << "#############################" << endl;
    while (!a_queue.empty())
    {
        cout << "QUEUE SIZE:" << a_queue.size() << " FRONT:" << a_queue.front() << " BACK:" << a_queue.back() << endl;
        a_queue.pop();
    }
}

/*
QUEUE SIZE:1 FRONT:1 BACK:1
QUEUE SIZE:2 FRONT:1 BACK:2
QUEUE SIZE:3 FRONT:1 BACK:3
QUEUE SIZE:4 FRONT:1 BACK:4
QUEUE SIZE:5 FRONT:1 BACK:5
#############################
QUEUE SIZE:5 FRONT:1 BACK:5
QUEUE SIZE:4 FRONT:2 BACK:5
QUEUE SIZE:3 FRONT:3 BACK:5
QUEUE SIZE:2 FRONT:4 BACK:5
QUEUE SIZE:1 FRONT:5 BACK:5
*/