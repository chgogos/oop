#include <iostream>
#include <cstdlib> // atoi

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 3){
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        cout << "SUM=" << a + b <<  endl;
    }
    else 
        cout << "Wrong number of arguments" << endl;

}