#include <iostream>
#include <utility>

int main()
{
    std::pair<int, int> p1 = std::make_pair(1, 2); // 1ος τρόπος δημιουργίας pair
    std::pair<int, int> p2(5, 5);                  // 2ος τρόπος δημιουργίας pair

    std::cout << (p1 <= p2 ? "p1 is equal or smaller than p2" : "p2 is smaller than p1")
              << std::endl;
    std::swap(p1, p2);
    std::cout << (p1 <= p2 ? "p1 is equal or smaller than p2" : "p2 is smaller than p1")
              << std::endl;

    std::cout << p1.first << "," << p1.second << std::endl;
    std::cout << p2.first << "," << p2.second << std::endl;

    std::pair<char, double> p3; // 3ος τρόπος δημιουργίας pair
    p3.first = 'a';
    p3.second = 3.14;
    std::cout << p3.first << "," << p3.second << std::endl;

    std::pair<std::pair<int, int>, std::string> p4(std::make_pair(1, 2), "test");
    // std::pair<std::pair<int, int>, std::string> p4 = std::make_pair(std::make_pair(1, 2), "test");
    std::cout << p4.first.first << " " << p4.first.second << " " << p4.second << std::endl;

    return 0;
}
