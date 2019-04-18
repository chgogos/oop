#include <iostream>

int main(){
    int a[]={1,2,3,4,5};
    std::cout << "Address of array: " << a << std::endl;

    for(int i=0;i<5;i++){
        std::cout << "Item " << i << " is at address: " << &a[i] << std::endl;
    }

    return 0;
}
