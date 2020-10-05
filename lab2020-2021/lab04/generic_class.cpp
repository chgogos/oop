#include <iostream>
#include <string>

template <typename T, typename U>
class pair
{
public:
    T first;
    U second;
    pair(const T &a, const U &b) : first(a), second(b) {}
};

int main()
{
    pair<int, int> p1 = {1, 2};
    pair<int, std::string> p2 = {1, "abc"};

    std::cout << p1.first << " " << p1.second << std::endl;
    std::cout << p2.first << " " << p2.second << std::endl;
}