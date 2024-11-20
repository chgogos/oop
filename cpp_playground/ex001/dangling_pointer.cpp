#include <iostream>

// η μεταβλητή x της συνάρτησης test είναι αντίγραφο της μεταβλητής x της main
// δημιουργείται πρόβλημα dangling pointer καθώς ο p δείχνει στη μεταβλητή  x
// που θα βγει εκτός εμβέλειας μόλις η συνάρτηση τερματίσει την εκτέλεσή της

int *test_not_ok(int x) {
  int *p = &x;
  (*p)++;
  return p;
}

// ok καθώς γίνεται δέσμευση μνήμης στο heap
int *test_ok(int x) {
  int *p = new int;
  *p = x;
  (*p)++;
  return p;
}

int main() {
  int x = 10;
  int *p = test_not_ok(x);
  // int *p = test_ok(x);
  std::cout << *p << std::endl;  // dangling pointer
  // free(p);
  return 0;
}

/*
11
*/
