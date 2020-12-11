#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if (argc!=3){
        cout << "wrong number of arguments";
        exit(-1);
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << a+ b << endl;
}