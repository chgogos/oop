#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Print {
public:
	void operator()(int elem) const {
		cout << elem << " ";
	}
};

int main () {
	vector<int> vect;
	for (int i=1; i<10; ++i) {
		vect.push_back(i);
	}

	Print print_it;
	for_each (vect.begin(), vect.end(), print_it);
	cout << endl;
	return 0;
}

/*
1 2 3 4 5 6 7 8 9 
*/