#include <iostream>
#include <stdlib.h>
#include "mylist.h"

using namespace std;

int main()
{
  // test default constructor, print an empty list
  cout << "test default constructor, print an empty list: \n";
  mylist a;
  a.print();

  // test insertfront
  cout << "test insertfront, output (\"ccc\", 1), (\"bbb\", 1) (\"aaaa\", 1). \n";
  a.insertfront("aaaa", 1);
  a.insertfront("bbb", 1);
  a.insertfront("ccc", 1);
  a.print();

  // test insertback
  cout << "test insertback, add (\"dddd\", 1), (\"eeee\", 1). \n";
  a.insertback("dddd", 1);
  a.insertback("eeee", 1);
  a.print();

  // test remove front

  // test insertback
  cout << "test removefront, remove (\"ccc\", 1), (\"bbb\", 1). \n";
  a.removefront();
  a.print();
  a.removefront();
  a.print();

  // test insertback
  cout << "test removeback, remove (\"eeee\", 1), (\"dddd\", 1). \n";
  a.removeback();
  a.removeback();
  a.print();

  // build up list to have "aaaa", "bbbb", "cccc", "dddd"
  a.insertback("bbbb", 10);
  a.insertback("cccc", 20);
  a.insertback("dddd", 5);

  cout << "list to be used to test front, back, length, search ...:\n";
  a.print();

  // test front
  cout << "test front, output (aaaa, 1). \n";
  listnode tt = a.front();
  tt.print();

  // test back
  cout << "test back, output (dddd, 1). \n";
  tt = a.back();
  tt.print();

  // test length
  cout << "test length, output 4. \n";
  int len = a.length();
  cout << "length = " << len << endl;

  // test search, output (aaaa, 1), (cccc, 20), (dddd, 5), NULL
  cout << "test search, output (aaaa, 1), (cccc, 20), (dddd, 5), NULL\n";
  listnode *ttt = a.search("aaaa");
  if (ttt)
    ttt->print();
  ttt = a.search("cccc");
  if (ttt)
    ttt->print();
  ttt = a.search("dddd");
  if (ttt)
    ttt->print();
  ttt = a.search("eee");
  if (ttt != NULL)
  {
    cout << "Something is wrong\n";
    exit(0);
  }
  else
  {
    cout << "eee is not in the list.\n";
  }

  // test findmaxcount
  cout << "test findmaxcount, output (cccc, 20)\n";
  ttt = a.findmaxcount();
  if (ttt)
    ttt->print();

  // test remove maxcount
  cout << "test findmaxcount, output (bbbb, 10)\n";
  a.removemaxcount();
  ttt = a.findmaxcount();
  if (ttt)
    ttt->print();
  cout << "the list after removemaxcount is :\n";
  a.print();

  // test searchandinc
  cout << "test searchandinc, output (aaaa, 2), (bbbb, 12), (dddd, 6)\n";
  if (!a.searchandinc("aaaa"))
  {
    cout << "aaaa is not in the list\n";
  }
  if (!a.searchandinc("bbbb"))
  {
    cout << "bbbb is not in the list\n";
  }
  if (!a.searchandinc("bbbb"))
  {
    cout << "bbbb is not in the list\n";
  }
  if (!a.searchandinc("cccc"))
  {
    cout << "cccc is not in the list, no inc\n";
  }
  if (!a.searchandinc("dddd"))
  {
    cout << "dddd is not in the list\n";
  }
  a.print();

  mylist b;
  b.insertback("item0", 10);
  b.insertback("item1", 10);
  b.insertback("item2", 10);
  b.insertback("item3", 10);
  b.insertback("item4", 10);
  b.insertback("item5", 10);
  b.insertback("item6", 10);
  b.insertback("item7", 10);
  b.insertback("item8", 10);
  b.insertback("item9", 10);

  cout << "content of list:\n";
  b.print();

  // test copy constructor
  cout << "test deep-copy copy constructor, output the list again\n";
  mylist c(b);
  mylist *z = new mylist(b);
  delete z;
  c.print();

  // test deep copy assignment operator
  cout << "test assignment, outputlist again\n";
  mylist *zz = new mylist(b);
  mylist d;
  d = *zz;
  delete zz;
  d.print();

  // test insertpos
  cout << "test insertpos.\n";
  cout << "insertpos (000, 1) at pos 0\n";
  cout << "insertpos (444, 2) at pos 4\n";
  c.insertpos(0, "000", 1);
  c.insertpos(4, "444", 2);
  cout << "list after insertpos:\n";
  c.print();

  // test insertbefore
  cout << "test insertbefore.\n";
  cout << "insertbefore (xxx, 100) before item3\n";
  cout << "insertbefore (yyy, 100) before 000\n";
  ttt = c.search("000");
  c.insertbefore(ttt, "yyy", 100);
  ttt = c.search("item3");
  c.insertbefore(ttt, "xxx", 100);
  cout << "list after insertbefore:\n";
  c.print();

  // test insertafter
  cout << "test insertafter.\n";
  cout << "insertafter (mmm, 100) after yyy\n";
  cout << "insertafter (nnn, 100) after item3\n";
  cout << "insertafter (ooo, 100) after item9\n";
  ttt = c.search("yyy");
  c.insertafter(ttt, "mmm", 100);
  ttt = c.search("item3");
  c.insertafter(ttt, "nnn", 100);
  ttt = c.search("item9");
  c.insertafter(ttt, "ooo", 100);
  cout << "list after insertafter:\n";
  c.print();

  // test removepos
  cout << "test removepos.\n";
  cout << "remove  (yyy, 100), (item0, 100), (ooo, 100)\n";
  c.removepos(0);
  c.removepos(2);
  c.removepos(14);
  cout << "list after removepos:\n";
  c.print();

  // test remove
  cout << "test remove.\n";
  cout << "remove  (mmm, 100), (xxx, 100), (item9, 100)\n";
  ttt = c.search("mmm");
  c.remove(ttt);
  ttt = c.search("xxx");
  c.remove(ttt);
  ttt = c.search("item9");
  c.remove(ttt);
  cout << "list after removepos:\n";
  c.print();
}


/*
test default constructor, print an empty list:
list has no item.
test insertfront, output ("ccc", 1), ("bbb", 1) ("aaaa", 1).
insertfront is not supported.
insertfront is not supported.
insertfront is not supported.
list has no item.
test insertback, add ("dddd", 1), ("eeee", 1).
(dddd, 1)
(eeee, 1)
test removefront, remove ("ccc", 1), ("bbb", 1).
(eeee, 1)
list has no item.
test removeback, remove ("eeee", 1), ("dddd", 1).
removeback is not supported.
removeback is not supported.
list has no item.
list to be used to test front, back, length, search ...:
(bbbb, 10)
(cccc, 20)
(dddd, 5)
test front, output (aaaa, 1).
(bbbb, 10)
test back, output (dddd, 1).
back is not supported.
(, 0)
test length, output 4.
length = 3
test search, output (aaaa, 1), (cccc, 20), (dddd, 5), NULL
(cccc, 20)
(dddd, 5)
eee is not in the list.
test findmaxcount, output (cccc, 20)
findmaxcount is not supported.
test findmaxcount, output (bbbb, 10)
removemaxcount is not supported.
findmaxcount is not supported.
the list after removemaxcount is :
(bbbb, 10)
(cccc, 20)
(dddd, 5)
test searchandinc, output (aaaa, 2), (bbbb, 12), (dddd, 6)
searchandinc is not supported.
searchandinc is not supported.
searchandinc is not supported.
searchandinc is not supported.
searchandinc is not supported.
(bbbb, 10)
(cccc, 20)
(dddd, 5)
content of list:
(item0, 10)
(item1, 10)
(item2, 10)
(item3, 10)
(item4, 10)
(item5, 10)
(item6, 10)
(item7, 10)
(item8, 10)
(item9, 10)
test deep-copy copy constructor, output the list again
copy constructor is not supported.
copy constructor is not supported.
list has no item.
test assignment, outputlist again
copy constructor is not supported.
= operator is not supported.
list has no item.
test insertpos.
insertpos (000, 1) at pos 0
insertpos (444, 2) at pos 4
insertpos is not supported.
insertpos is not supported.
list after insertpos:
list has no item.
test insertbefore.
insertbefore (xxx, 100) before item3
insertbefore (yyy, 100) before 000
insertbefore: can't insert before a NULL pointer.
*/