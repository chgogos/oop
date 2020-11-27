#include <iostream>
#include "simplelist2.h"

using namespace std;
   
SimpleList::SimpleList()
{
   current = 0;
}

bool SimpleList::Insert(mytype item)
{
   if (current < MAX)
   {
	array[current] = item;
	current++;
	return true;
   }
   else
	return false;
}

mytype SimpleList::GetElement(unsigned int n)
{
   if (n >= MAX)
	n = MAX - 1;
   return array[n];
}

void SimpleList::Print()
{
   if (current == 0)
   {	cout << "Empty List";
	return;
   }
   int i;
   for (i = 0; i < current-1; i++)
	cout << array[i] << ' ';
   cout << array[i];
}

int SimpleList::GetSize()
{
   return current;
}
