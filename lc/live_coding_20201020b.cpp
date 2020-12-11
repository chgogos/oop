#include <iostream>

using namespace std;


int main()
{
    int x = 5;
    int &rx = x; // το rx είναι αναφορά, δηλαδή μπορεί να θεωρηθεί ως ψευδώνυμο του x

    rx*=2;

    cout << x << endl;

}