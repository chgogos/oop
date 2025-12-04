#include <iostream>
using namespace std;

main() {
  int donuts, milk;
  double dpg;

  try {
    cout << "Enter number of donuts:\n";
    cin >> donuts;
    cout << "Enter number of glasses of milk:\n";
    cin >> milk;
    if (milk <= 0) throw donuts;

    dpg = donuts / static_cast<double>(milk);
    cout << donuts << " donuts.\n"
         << milk << " glasses of milk.\n"
         << "You have " << dpg << " donuts for each glass of milk.\n";
  } catch (int e) {
    cout << e << " donuts. and No Milk!\n"
         << "Go buy some milk.\n";
  }
}

/*
Enter number of donuts:
10
Enter number of glasses of milk:
2
10 donuts.
2 glasses of milk.
You have 5 donuts for each glass of milk.
*/

/*
Enter number of donuts:
10
Enter number of glasses of milk:
-1
10 donuts. and No Milk!
Go buy some milk.
*/