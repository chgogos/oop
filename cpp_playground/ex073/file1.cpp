#include <iostream>
#include <fstream>

int main()
{
    std::ofstream afile;
    afile.open("data.txt");
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
