#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char buffer[40] = "Dog";		// length 3, capacity 39
  char word2[] = "food";		// length 4, capacity 4

  cout << "buffer = " << buffer << '\n';
  cout << "word2 = " << word2 << '\n';

  strcat(buffer, word2);		// buffer is now "Dogfood"
  cout << "buffer = " << buffer << '\n';

  strcat(buffer, " breath");		// buffer is now "Dogfood breath"
  cout << "buffer = " << buffer << '\n';

  strcat(buffer, buffer);		// plenty of room for this, right?
					//  any problems?
  cout << "buffer = " << buffer << '\n';

  return 0;
}

/*
buffer = Dog
word2 = food
buffer = Dogfood
buffer = Dogfood breath
*/
