#include <iostream>
#include <vector>

template <class T>
void reverse(std::vector<T> &v)
{
    size_t left = 0;
    size_t right = v.size() - 1;
    while (left < right)
    {
        std::swap(v[left], v[right]);
        left++;
        right--;
    }
}

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    reverse(v1);
    for (size_t i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << std::endl;
    }

    std::vector<std::string> v2{"aaa", "bbb", "ccc", "ddd"};
    reverse(v2);
    for (size_t i = 0, length = v1.size(); i < length; i++) // ταχύτερο
    {
        std::cout << v2[i] << std::endl;
        // + 2 εναλλακτικοί τρόποι αναφοράς στα στοιχεία του vector
        // std::cout << v2.operator[](i) << std::endl; // είναι ισοδύναμο με την παραπάνω εντολή
        // std::cout << v2.at(i) << std::endl; // κάνει έλεγχο ορίων
    }

    return 0;
}