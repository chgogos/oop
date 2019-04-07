#include <iostream>
#include <string>

int main()
{
    std::string s;
    int i = 0;
    std::cout << "Input words, ctrl + d to stop" << std::endl;
    while (getline(std::cin, s)) // είσοδος γραμμή προς γραμμή
    {
        i++;
        std::cout << i << ". You entered " << s << std::endl;
    }
    std::cout << "Finished" << std::endl;

    return 0;
}
