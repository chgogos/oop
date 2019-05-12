#include <iostream>
#include <fstream>

int main()
{
    std::ofstream afile;
    afile.open("data1.txt"); // εξ' ορισμού τα αντικείμενα ofstream ανοίγουν για είσοδο (ios::in)
    if (afile.is_open())
    {
        afile << "This \n";
        afile << "is \n";
        afile << "a \n";
        afile << "test. \n";
        afile.close();
    }
    else
    {
        std::cout << "failed to open file" << std::endl;
    }

    return 0;
}
