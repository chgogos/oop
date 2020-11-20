// https://stepik.org/lesson/26105/step/8?unit=11291
#include <iostream>
#include <iterator>

// Helper Node class
class Node
{
public:
    int value;
    Node *next = nullptr;
};

// Linked List class
class LinkedList
{
public:
    Node *root = nullptr; // root node

    void push_back(int v)
    {
        Node *a_node = new Node;
        a_node->value = v;

        if (root == nullptr)
        {
            root = a_node;
            return;
        }

        Node *current = root;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = a_node;
    }

    void print()
    {
        Node *current = root;
        while (current != nullptr)
        {
            std::cout << current->value << std::endl;
            current = current->next;
        }
    }

    // Iterator class
    class iterator : public std::iterator<std::forward_iterator_tag, int>
    {
    public:
        friend class LinkedList; // declare Linked List class as a friend class
        Node *curr;              // the Node this iterator is pointing to

        // the following typedefs are needed for the iterator to play nicely with C++ STL
        typedef int value_type;
        typedef int &reference;
        typedef int *pointer;
        typedef int difference_type;
        typedef std::forward_iterator_tag iterator_category;

        // iterator constructor
        iterator(Node *x = 0) : curr(x) {}

        // overload the == operator of the iterator class
        bool operator==(const iterator &x) const
        {
            return curr == x.curr; // compare curr pointers for equality
        }

        // overload the != operator of the iterator class
        bool operator!=(const iterator &x) const
        {
            return curr != x.curr; // compare curr pointers for inequality
        }

        // overload the * operator of the iterator class
        reference operator*() const
        {
            return curr->value; // return curr's value
        }

        // overload the ++ (pre-increment) operator of the iterator class
        iterator &operator++()
        {
            curr = curr->next; // move to next element
            return *this;      // return after the move
        }

        // overload the ++ (post-increment) operator of the iterator class
        iterator operator++(int)
        {
            iterator tmp(curr); // create a temporary iterator to current element
            curr = curr->next;  // move to next element
            return tmp;         // return iterator to previous element
        }
    };

    // return iterator to first element
    iterator begin()
    {
        return iterator(root);
    }

    // return iterator to JUST AFTER the last element
    iterator end()
    {
        return iterator(NULL);
    }
};

int main()
{
    LinkedList ll;
    ll.push_back(42);
    ll.push_back(67);
    ll.push_back(36);
    ll.print();

    std::cout << "--------------------------------" << std::endl;

    for (LinkedList::iterator it = ll.begin(); it != ll.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}