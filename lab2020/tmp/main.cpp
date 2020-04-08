#include "date2020.hpp"
#include <iostream>

using namespace std;

int main()
{
    date2020 d1;  // 1/1/2020
    d1.print();

    date2020 d2(15, 3); // 15/3/2020
    d2.print();

    date2020 d3(30, 2); // invalid date

    // date2020 d4(100); 
    // d4.print();

    // date2020 d5(200); 
    // d5.print();

    // date2020 d6(300); 
    // d6.print();

    // date2020 d7(400); 
    // d7.print();

    // for (int i = 0; i < 60; i++)
    // {
    //     date2020 d(1,4); 
    //     d.plus_days(i);
    //     d.print();
    // }

}