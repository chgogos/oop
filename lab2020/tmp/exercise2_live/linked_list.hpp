#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head;

public:
    linked_list();
    // copy constructor (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    linked_list(const linked_list &ll); 
    ~linked_list();

    // επιστροφή ενός δείκτη προς το πρώτο στοιχείο της λίστας
    node *front();

    // προσθήκη ενός στοιχείου στην αρχή της λίστας
    void push_front(int d);

    // εκτύπωση των στοιχείων της λίστας 
    void print();

    // επιστροφή του πλήθους των στοιχείων της λίστας (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    int length();

    // επιστροφή του αθροίσματος των στοιχείων της λίστας (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    int sum();

    // διαγραφή του στοιχείου που βρίσκεται στην αρχή της λίστας (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    void erase_front();

    // προσθήκη ενός στοιχείου στο τέλος της λίστας (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    void push_back(int d);

    // ταξινόμηση σε αύξουσα σειρά των στοιχείων της λίστας (συμπληρώστε την υλοποίηση στο linked_list.cpp)
    void bubble_sort();

    void delete_at_position(int pos);
};

#endif