#include "linked_list.hpp"
#include <iostream>

using namespace std;

linked_list::linked_list() : head(nullptr) {}

linked_list::linked_list(const linked_list &ll)
{
    if (ll.head == nullptr)
    {
        head = nullptr;
        return;
    }
    node *current = ll.head;
    node *pnode1 = new node;
    pnode1->data = current->data;
    head = pnode1;
    while (current->next != nullptr)
    {
        node *pnode2 = new node;
        pnode1->next = pnode2;
        pnode2->data = current->next->data;
        pnode1 = pnode2;
        current = current->next;
    }
    pnode1->next = nullptr;
}

linked_list::~linked_list()
{
    node *current = head;
    while (current != nullptr)
    {
        node *temp = current->next;
        delete current;
        current = temp;
    }
}

node *linked_list::front()
{
    return head;
}

void linked_list::push_front(int d)
{
    node *new_node = new node;
    new_node->data = d;
    new_node->next = head;
    head = new_node;
}

void linked_list::print()
{
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int linked_list::length()
{
    int c = 0;
    node *current = head;
    while (current != nullptr)
    {
        c++;
        current = current->next;
    }
    return c;
}

int linked_list::sum()
{
    int s = 0;
    node *current = head;
    while (current != nullptr)
    {
        s += current->data;
        current = current->next;
    }
    return s;
}

void linked_list::erase_front()
{
    if (head == nullptr)
        return;
    node *temp = head;
    head = head->next;
    delete temp;
}

void linked_list::push_back(int d)
{
    node *new_node = new node;
    new_node->data = d;
    new_node->next = nullptr;

    if (head == nullptr)
    {
        head = new_node;
        return;
    }
    node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = new_node;
}

void linked_list::bubble_sort()
{
    if (head == nullptr)
        return;
    node *current;
    node *tail = nullptr;
    bool flag;
    do
    {
        flag = false;
        current = head;
        while (current->next != tail)
        {
            if (current->data > current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                flag = true;
            }
            current = current->next;
        }
        tail = current;
    } while (flag);
}

void linked_list::delete_at_position(int pos)
{
}

void linked_list::insert_at_position(int pos, int d)
{
}

void linked_list::reverse()
{
}