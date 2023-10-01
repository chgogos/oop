#include <iostream>

using namespace std;

class date
{
public:
    int year;
    int month;
    int day;
    void print()
    {
        cout << year << "-" << month << "-" << day << endl;
    }
};

int main()
{
    date d {2021, 10, 15};
    d.print();
    d.day = 16;
    d.print();
}