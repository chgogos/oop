#include <iostream>

struct DateStruct
{
    int year{};
    int month{};
    int day{};
};

void print(const DateStruct &date)
{
    std::cout << date.year << '/' << date.month << '/' << date.day;
}

int main()
{

    DateStruct today{2020, 10, 14}; // use uniform initialization

    today.day = 16; // use member selection operator to select a member of the struct
    print(today);

    return 0;
}