#include <stdlib.h>
#include <iostream>
#include "mylist.h"

//using namespace std;

//
// this routine is complete
//
void listnode::print()
{
  cout << "(" << s << ", " << count << ")\n";
}

//
// default constructor making an empty list:
//   head and tail should be NULL, and size should be 0.
// this routine is complete
mylist::mylist():head(NULL), tail(NULL), size(0)
{};

//
// delete all items in the list. Since each item in the list was allocated
// using a new operation, you will need a loop to delete each node.
//
// this routine is complete
mylist::~mylist()
{
  listnode *t, *t1;
  t = head;
  while (t!=NULL) {
    t1 = t;
    t = t->next;
    delete t1;
  }
}

//
// Insert to an item (s, c) to the back of the list
// You need to deal with the cases when the list is empty
// or not empty. tail needs to point to be newly inserted item.
// 
// this routine is complete
void mylist::insertback(const string &s, const int & c)
{
  listnode *t = new listnode(s, c);
  if (head == NULL) { // list is currently empty, both head and tail
                      // should point to the new node
    head = t;
    tail = t;
    size++;
  } else {
    t->prev = tail; // t's prev points to the current tail
    tail->next = t; // current tail's next points to the new node
    tail = t;       // the new node become the new tail
    size++;         // increment the size of the list
  }
}

//
// Insert to an item (s, c) before the item pointed to by ptr
// ptr cannot be NULL
//
// this routine is complete.
void mylist::insertbefore(listnode *ptr, const string &s, const int & c)
{
  if (ptr == NULL) {
    cout << "insertbefore: can't insert before a NULL pointer.\n";
    exit(0);
  }

  // special case: insert before the head
  if (ptr == head) {insertfront(s, c); return;}
 
  // normal case: insert to the middle of the list

  listnode *t = new listnode(s, c); // make the new node

  // this is the four steps to insert a node into the linked list
  // discussed in the lecture
  t->next = ptr;   // new node's next should be ptr 
  t->prev = ptr->prev;  // new node's prev should be the node before ptr
  ptr->prev->next = t;  // the node before ptr's next points to the new node
  ptr->prev = t;        // ptr's prev points to the new node

}


//
// Insert to an item (s, c) to the beginning of the list
// You need to deal with the cases when the list is empty
// or not empty. head needs to point to be newly inserted item.
//
void mylist::insertfront(const string &s, const int & c)
{
  // change me, your code here
  cout << "insertfront is not supported.\n";
}


//
// Insert to an item (s, c) after the item pointed to by ptr
// ptr cannot be NULL
//
void mylist::insertafter(listnode *ptr, const string &s, const int & c)
{
  // change me, your code here
  cout << "insertafter is not supported.\n";
}

//
// Insert to an item (s, c) to be the pos-th item in the list (counted from 0)
// This function must be implemented from scratch, no routine can be called
// inside this function.
//
void mylist::insertpos(const int &pos, const string &s, const int & c)
{
  // change me, your code here
  cout << "insertpos is not supported.\n";
}

//
// printing the content and the list
//
// this routine is complete
void mylist::print()
{
  if (head == NULL) {
    cout << "list has no item.\n";
    return;
  }

  listnode *t;
  t = head;
  while (t!=NULL) {
    t->print();
    t= t->next;
  }
}  

// 
// copy constructor, must make a deep copy
//
mylist::mylist(const mylist &l)
{
  // change me, your code here
  cout << "copy constructor is not supported.\n";
  size =0; head=NULL; tail = NULL;
}
 
//
// assignment operator
// must release the memory for old list if necessary and make a deep
// copy.
//
mylist & mylist::operator=(const mylist &l)
{
  // change me, your code here
  cout << "= operator is not supported.\n";
  size =0; head=NULL; tail = NULL;
  return *this;
}

//
// remove the first node in the list
// if the list becomes empty, head, tail, and size must be set to
// the state of an empty list.
//
// this routine is complete
void mylist::removefront()
{
  if (head == NULL) {
    cout << "removefront: Can't remove from an empty list.\n";
    exit(0);
  }

  if (head == tail) { // one item
    delete head;
    head = tail = NULL;
    size = 0;
    return;
  }

  listnode *t = head;
  head = head->next;
  head->prev = NULL;
  delete t;
  size--;
}

//
// remove the last node in the list
// if the list becomes empty, head, tail, and size must be set to
// the state of an empty list.
//
void mylist::removeback()
{
  // change me, your code here
  cout << "removeback is not supported.\n";
}

//
// remove the node pointed to by ptr
// if the list becomes empty, head, tail, and size must be set to
// the state of an empty list.
//
void mylist::remove(listnode *ptr)
{
  if (ptr == NULL) {
    cout << "Remove: can't remove an NULL pointer.\n";
    exit(0);
  }

  // change me, your code here, we discuss the operation in the lecture
  cout << "remove is not supported.\n";
}

//
// Remove the pos-th node from the list
// if pos is larger than the length of the list, do nothing.
// this routine cannot call any other subroutines
//
void mylist::removepos(const int & pos)
{
  // change me, your code here, we discuss the operation in the lecture
  cout << "removepos is not supported.\n";

}

//
// return the length of the list
//
// this routine is complete
int mylist::length() const
{
  return size;
}

//
// return the first node in the list
//
// this routine is complete
listnode mylist::front() const
{
  if (head == NULL) {
    cout << "front: can't get front from an empty list.\n";
    exit(0);
  }
  return listnode(head->s, head->count);
}

//
// return the last node in the list
//
listnode mylist::back() const
{
  // change me, your code here.
  cout << "back is not supported.\n";
  return listnode();

}

//
// search if string s is in the list
// if yes, return the pointer to the listnode in the list
// if not, return NULL
//
// this routine is complete.
listnode *mylist::search(const string &s)
{
  listnode *t = head;

  while ((t!=NULL) && (t->s != s)) t = t->next;
  return t;
}

//
// find the listnode with the largest count in the list.
// Return the pointer to the listnode. When multiple nodes have the same 
// largest count value, the one occurs the earlist (closest to the front)
//  should be returned.
//
listnode *mylist::findmaxcount()
{
  // change me, your code here.
  cout << "findmaxcount is not supported.\n";
  return NULL;
  
}

//
// remove the node with the largest count from the list
//
void mylist::removemaxcount()
{
  // change me, your code here. just call findmaxcount() and then remove()
  cout << "removemaxcount is not supported.\n";
}

//
// Search the list to see if s is in it
// if yes, increment its count by 1 and return true
// if not, return false.
//
bool mylist::searchandinc(const string &s)
{
  // change me, your code here. just call search and then update the count
  cout << "searchandinc is not supported.\n";
  return true;
}
