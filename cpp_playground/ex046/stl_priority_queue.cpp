#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <list>
using namespace std;

int main()
{
    // priority_queue<int> a_priority_queue;  // MAX HEAP
    priority_queue<int,vector<int>,less<int>> a_priority_queue;
    for (int x : {7,2,5,8,9,1})
    {
        a_priority_queue.push(x);
        cout << "PRIORITY QUEUE(MAX HEAP) SIZE:" << a_priority_queue.size() << " TOP:" << a_priority_queue.top() << endl;
    }

    cout << "#############################" << endl;
    while (!a_priority_queue.empty())
    {
        cout << "PRIORITY QUEUE(MAX HEAP) SIZE:" << a_priority_queue.size() << " TOP:" << a_priority_queue.top() << endl;
        a_priority_queue.pop();
    }

    cout << "#############################" << endl;

    priority_queue<int,vector<int>,greater<int>> a_priority_queue2; // MIN HEAP
    for (int x : {7,2,5,8,9,1})
    {
        a_priority_queue2.push(x);
        cout << "PRIORITY QUEUE(MIN HEAP) SIZE:" << a_priority_queue2.size() << " TOP:" << a_priority_queue2.top() << endl;
    }

    cout << "#############################" << endl;
    while (!a_priority_queue2.empty())
    {
        cout << "PRIORITY QUEUE(MIN HEAP) SIZE:" << a_priority_queue2.size() << " TOP:" << a_priority_queue2.top() << endl;
        a_priority_queue2.pop();
    }
}

/*
PRIORITY QUEUE(MAX HEAP) SIZE:1 TOP:7
PRIORITY QUEUE(MAX HEAP) SIZE:2 TOP:7
PRIORITY QUEUE(MAX HEAP) SIZE:3 TOP:7
PRIORITY QUEUE(MAX HEAP) SIZE:4 TOP:8
PRIORITY QUEUE(MAX HEAP) SIZE:5 TOP:9
PRIORITY QUEUE(MAX HEAP) SIZE:6 TOP:9
#############################
PRIORITY QUEUE(MAX HEAP) SIZE:6 TOP:9
PRIORITY QUEUE(MAX HEAP) SIZE:5 TOP:8
PRIORITY QUEUE(MAX HEAP) SIZE:4 TOP:7
PRIORITY QUEUE(MAX HEAP) SIZE:3 TOP:5
PRIORITY QUEUE(MAX HEAP) SIZE:2 TOP:2
PRIORITY QUEUE(MAX HEAP) SIZE:1 TOP:1
#############################
PRIORITY QUEUE(MIN HEAP) SIZE:1 TOP:7
PRIORITY QUEUE(MIN HEAP) SIZE:2 TOP:2
PRIORITY QUEUE(MIN HEAP) SIZE:3 TOP:2
PRIORITY QUEUE(MIN HEAP) SIZE:4 TOP:2
PRIORITY QUEUE(MIN HEAP) SIZE:5 TOP:2
PRIORITY QUEUE(MIN HEAP) SIZE:6 TOP:1
#############################
PRIORITY QUEUE(MIN HEAP) SIZE:6 TOP:1
PRIORITY QUEUE(MIN HEAP) SIZE:5 TOP:2
PRIORITY QUEUE(MIN HEAP) SIZE:4 TOP:5
PRIORITY QUEUE(MIN HEAP) SIZE:3 TOP:7
PRIORITY QUEUE(MIN HEAP) SIZE:2 TOP:8
PRIORITY QUEUE(MIN HEAP) SIZE:1 TOP:9
*/