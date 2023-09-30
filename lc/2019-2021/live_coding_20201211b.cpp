#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if (argc!=2){
        cout << "wrong number of arguments";
        exit(-1);
    }
    
    string fn = argv[1];
    cout << "GO AND OPEN " << fn << endl;

}