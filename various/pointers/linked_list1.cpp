// 15/11/2019
// απλά συνδεδεμένη λίστα
// χρήση αναφοράς σε δείκτη έτσι ώστε οι συναρτήσεις να επιδρούν στην λίστα

#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

void push_front(node *&head, int x)
{
    node *new_node = new node;
    new_node->value = x;
    new_node->next = head;
    head = new_node;
}

void erase_front(node *&head)
{
    if (head == NULL)
        return;
    node *cur = head->next;
    delete head;
    head = cur;
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
    push_front(head, 5);
    push_front(head, 7);
    push_front(head, 9);
    print_list(head);
    erase_front(head);
    print_list(head);
    delete_list(head);
}