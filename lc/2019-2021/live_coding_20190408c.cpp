#include <iostream>
#include <vector>

int main(){
    std::vector<double> v{3.1, 4.2};
    v.push_back(4.2);
    v.push_back(7.2);
    v.push_back(3.2);
    v.push_back(2.2);

    for(size_t i=0;i<v.size();i++){
        // std::cout << v[i] << " ";
        std::cout << v.operator[](i) << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Asking for problem: " << v[10] <<std::endl; // απρόβλεπτη συμπεριφορά
    
    std::cout << "Asking for problem: " << v.at(10) <<std::endl;  // exception
    
    return 0;
}
