#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
        cout << "argv[" << i << "]=" << argv[i] << endl;
    return 0;
}

/*
$ g++ sample1.cpp -o sample1
$ ./sample1 a b c d
argv[0]=sample1
argv[1]=a
argv[2]=b
argv[3]=c
argv[4]=d
*/