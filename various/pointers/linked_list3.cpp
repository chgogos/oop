#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

node *push_front(node *head, int x)
{
    node *new_node = new node;
    new_node->value = x;
    new_node->next = head;
    return new_node;
}

node *erase_front(node *head)
{
    if (head == NULL)
        return NULL;
    node *cur = head->next;
    delete head;
    return cur;
}

void print_list(node *head)
{
    node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << endl;
}

void delete_list(node *head)
{
    node *cur = head;
    while (cur != NULL)
    {
        node *tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}

int main()
{
    node *head = NULL;
    head = push_front(head, 5);
    head = push_front(head, 7);
    head = push_front(head, 9);
    print_list(head);
    head = erase_front(head);
    print_list(head);
    delete_list(head);
}