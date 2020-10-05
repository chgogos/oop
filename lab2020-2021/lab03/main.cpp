#include <iostream>
#include "circle.hpp"
#include "line_segment.hpp"

using namespace std;

int main()
{
    circle a_circle(1, 2, 7.0);
    for (int i = 0; i < 5; i++)
    {
        a_circle.center().move(1, 1);
        cout << a_circle << endl;
    }

    line_segment a_line_segmnent(1, 2, 7, 9);
    for (int i = 0; i < 5; i++)
    {
        a_line_segmnent.from().move(1, 1);
        a_line_segmnent.to().move(-1, -1);
        cout << a_line_segmnent << endl;
    }
}