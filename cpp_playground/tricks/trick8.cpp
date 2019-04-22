#include <iostream>

// είσοδος και έξοδος με χρήση επαναληπτών
int main()
{
    std::cout << "Enter 2 integer values: ";
    std::istream_iterator<int> input_iterator(std::cin);
    int a = *input_iterator;
    ++input_iterator;
    int b = *input_iterator;

    std::ostream_iterator<int> output_iterator(std::cout);
    *output_iterator = a + b;
    std::cout << std::endl;

    return 0;
}