#include <cstring>
#include <iostream>
using namespace std;

int main() {
  const char greeting[25] = "Take me to your leader";  // length 22, capacity 24
  char welcome[10] = "Hello";                          // length 5, capacity 9

  cout << "greeting[] = " << greeting << '\n';
  cout << "welcome[] = " << welcome << '\n';

  strcpy(welcome, greeting);  // anything to worry about?

  cout << "greeting[] = " << greeting << '\n';
  cout << "welcome[] = " << welcome << '\n';

  // WILL this behave the same on all systems?
}

/*
greeting[] = Take me to your leader
welcome[] = Hello
greeting[] =  your leader
welcome[] = Take me to your leader
*/