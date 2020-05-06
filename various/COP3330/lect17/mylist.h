#ifndef MYLIST_H
#define MYLIST_H
#include <string>
using namespace std;

class listnode
{
public:
  string s;
  int count;
  listnode *next;
  listnode *prev;
  listnode() : s(""), count(0), next(NULL), prev(NULL){};
  listnode(const string &ss, const int &c) : s(ss), count(c), next(NULL),
                                             prev(NULL){};
  void print();
};

class mylist
{
public:
  mylist();
  ~mylist();
  void print();
  mylist(const mylist &l);
  mylist &operator=(const mylist &l);

  void insertfront(const string &s, const int &c);
  void insertback(const string &s, const int &c);
  void insertbefore(listnode *ptr, const string &s, const int &c);
  void insertafter(listnode *ptr, const string &s, const int &c);
  void insertpos(const int &pos, const string &s, const int &c);

  void removefront();
  void removeback();
  void remove(listnode *ptr);
  void removepos(const int &pos);

  listnode front() const;
  listnode back() const;
  int length() const;
  listnode *search(const string &s);
  listnode *findmaxcount();
  void removemaxcount();
  bool searchandinc(const string &s);

private:
  listnode *head;
  listnode *tail;
  int size;
};

#endif
