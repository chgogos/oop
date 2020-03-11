#include <memory>
#include <iostream>


int main(){
    std::unique_ptr<int> px = std::make_unique<int>();
    std::cout << px << std::endl;



    return 0;
}
