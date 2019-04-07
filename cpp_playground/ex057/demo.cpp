#include <iostream>
#include "arabic_to_roman.hpp"

int main(){
    for(int i=1;i<=3999;i++){
        std::cout << i << " " << convert_arabic_to_roman(i) << std::endl;
    }

    return 0;
}
