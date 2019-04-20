#include <iostream>

class my_class{
    public:
        my_class() {
            std::cout << "start" << std::endl;
        }
        ~my_class() {
            std::cout << "finish" << std::endl;
        }
};

my_class obj;

int main(){
    std::cout << "main" << std::endl;
}