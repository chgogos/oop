#include <iostream>
#include <iomanip>
#include <fstream>

struct student
{
    std::string name;
    double grade;
    int semester;
};

void write_formatted_data()
{
    std::ofstream afile;
    afile.open("data2.txt", std::ios::out);
    if (!afile.is_open())
    {
        std::cerr << "File could not be opened" << std::endl;
    }
    student students[] = {
        {"Nikos", 9.0, 3},
        {"Maria", 7.5, 7},
        {"Petros", 5.5, 5}};

    for (int i = 0; i < 3; i++)
    {
        afile << students[i].name << ' ' << students[i].grade << ' ' << students[i].semester << std::endl;
    }
    afile.close();
}

void read_formatted_data()
{
    std::ifstream afile;
    afile.open("data2.txt", std::ios::in);
    if (!afile.is_open())
    {
        std::cerr << "File could not be opened" << std::endl;
    }
    student st;
    while (afile >> st.name >> st.grade >> st.semester)
    {
        std::cout << std::setw(3) << std::left << st.name << ' ';
        std::cout << std::setw(5) << std::fixed << std::setprecision(2) << std::right << st.grade << ' ';
        std::cout << std::setw(5) << st.semester << std::endl;
    }
    afile.close();
}

int main()
{
    std::cout << "WRITE DATA" << std::endl;
    write_formatted_data();

    std::cout << "READ DATA" << std::endl;
    read_formatted_data();
}