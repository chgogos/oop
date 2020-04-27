const int MAX = 10;

template< class T >
class SimpleList
{
public:
   SimpleList();
   bool Insert(T item);	// inserts item into list (if room)
   T GetElement(unsigned int n);	// returns element at index n 
   void Print();		// prints the list
   int GetSize();		// returns number of elements in list

private:
   T array[MAX];
   int current;		// number of stored items (max is 10)

};
