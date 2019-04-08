#include <iostream>
#include <utility>

typedef std::pair<std::string, int> psi;
using  pss = std::pair<std::string, std::string>;

int main(){
    psi pair1 = std::make_pair("Nikos", 32);
    psi pair2 = std::make_pair("Maria", 27);

    std::swap(pair1, pair2);
    std::cout << pair1.first << " " << pair1.second << std::endl;

    pss pair3 = std::make_pair("aaa", "bb");

    return 0;
}