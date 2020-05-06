#include "linked_list.hpp"
#include <iostream>

using namespace std;

linked_list::linked_list() : head(nullptr) {}

// copy constructor
linked_list::linked_list(const linked_list &ll)
{
    head = nullptr;
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
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
    int sum = 0;
    node *current = head;
    while (current != nullptr)
    {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

void linked_list::erase_front()
{
    if (head == nullptr)
        return;
    node* temp = head;
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
