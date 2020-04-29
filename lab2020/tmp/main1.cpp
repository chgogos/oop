#include "model.hpp"

int main()
{
    line_item li1("TV", 1, 300.0);
    li1.print();

    order o1("001", "2020-04-28 11:10:00", "2020-04-28 11:20:00", "Ioannina");
    o1.print();
}