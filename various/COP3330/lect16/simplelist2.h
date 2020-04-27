const int MAX = 10;

// typedef int mytype;
typedef double mytype;

class SimpleList
{
public:
   SimpleList();
   bool Insert(mytype item);	// inserts item into list (if room)
   mytype GetElement(unsigned int n);	// returns element at index n 
   void Print();		// prints the list
   int GetSize();		// returns number of elements in list

private:
   mytype array[MAX];
   int current;		// number of stored items (max is 10)

};