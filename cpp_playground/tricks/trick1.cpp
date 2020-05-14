#include <iostream>

// περίεργη; αναφορά στα στοιχεία ενός πίνακα
int main(){
    int a[]={1,2,3};
    std::cout << 0[a] << std::endl;
    std::cout << 1[a] << std::endl;
    std::cout << 2[a] << std::endl;
    return 0;
}

/*
1
2
3
*/