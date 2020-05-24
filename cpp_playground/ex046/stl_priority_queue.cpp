#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <list>
using namespace std;

int main()
{
    priority_queue<int> a_priority_queue;
    for (int x : {7,2,5,8,9,1})
    {
        a_priority_queue.push(x);
        cout << "PRIORITY QUEUE SIZE:" << a_priority_queue.size() << " TOP:" << a_priority_queue.top() << endl;
    }

    cout << "#############################" << endl;
    while (!a_priority_queue.empty())
    {
        cout << "PRIORITY QUEUE SIZE:" << a_priority_queue.size() << " TOP:" << a_priority_queue.top() << endl;
        a_priority_queue.pop();
    }
}

/*
PRIORITY QUEUE SIZE:1 TOP:7
PRIORITY QUEUE SIZE:2 TOP:7
PRIORITY QUEUE SIZE:3 TOP:7
PRIORITY QUEUE SIZE:4 TOP:8
PRIORITY QUEUE SIZE:5 TOP:9
PRIORITY QUEUE SIZE:6 TOP:9
#############################
PRIORITY QUEUE SIZE:6 TOP:9
PRIORITY QUEUE SIZE:5 TOP:8
PRIORITY QUEUE SIZE:4 TOP:7
PRIORITY QUEUE SIZE:3 TOP:5
PRIORITY QUEUE SIZE:2 TOP:2
PRIORITY QUEUE SIZE:1 TOP:1
*/