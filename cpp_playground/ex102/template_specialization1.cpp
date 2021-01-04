// https://www.geeksforgeeks.org/template-specialization-c/

#include <iostream> 
using namespace std; 

template <class T> 
void fun(T a) 
{ 
cout << "The main template fun(): "
		<< a << endl; 
} 

template<> 
void fun(int a) 
{ 
	cout << "Specialized Template for int type: "
		<< a << endl; 
} 

int main() 
{ 
	fun<char>('a'); 
	fun<int>(10); 
	fun<float>(10.14); 
} 

/*
The main template fun(): a
Specialized Template for int type: 10
The main template fun(): 10.14
*/