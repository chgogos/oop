#include "linked_list.hpp"
#include <iostream>

using namespace std;

linked_list::linked_list() : head(nullptr) {}

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
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    return -1;
}

int linked_list::sum()
{
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    return -1;
}

void linked_list::erase_front()
{
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
}

void linked_list::push_back(int d)
{
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
}

void linked_list::bubble_sort()
{
    // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
}
