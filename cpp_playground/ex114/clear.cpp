#include <iostream>
using namespace std;

int main(){
    cout << "This is some text" << endl;   
    getchar(); // Wait for user to press a key
    std::cout << "\033[2J\033[1;1H"; 
    cout << "This is some text" << endl;

    return 0;
}