#include <iostream>
using namespace std;

main()
{
  int donuts, milk;
  double dpg;

  cout << "Enter number of donuts:\n";
  cin >> donuts;
  cout << "Enter number of glasses of milk:\n";
  cin >> milk;

  dpg = donuts / static_cast<double>(milk);

  cout << donuts << " donuts.\n" 
       << milk << " glasses of milk.\n"
       << "You have " << dpg << " donuts for each glass of milk.\n";
}

/*
Enter number of donuts:
10
Enter number of glasses of milk:
0
10 donuts.
0 glasses of milk.
*/

/*
Enter number of donuts:
10
Enter number of glasses of milk:
-1
10 donuts.
-1 glasses of milk.
You have -10 donuts for each glass of milk.
*/