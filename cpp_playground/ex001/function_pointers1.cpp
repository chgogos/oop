#include <iostream>

void test() { std::cout << "just testing"; }

typedef void (*MyFunction)();  // type alias
// using MyFunction = void(*)(); // alias με τη χρήση του using (C++11)

int main() {
  MyFunction f = test;
  // void (*f)() = test; // αν δεν είχε χρησιμοποιηθεί η typedef θα έπρεπε να
  // γίνει με αυτόν τον τρόπο η δήλωση του function pointer f
  f();
}

/*
just testing
*/
