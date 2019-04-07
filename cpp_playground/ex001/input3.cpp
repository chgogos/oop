#include <iostream>
#include <string>

int main()
{
    int x;
    int i = 0;
    int sum=0;
    std::cout << "Input int values, ctrl + d to stop" << std::endl;
    while (std::cin>> x)
    {
        i++;
        std::cout << i << ". You entered " << x << std::endl;
        sum += x;
    }
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
