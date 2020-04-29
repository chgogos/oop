#include "model.hpp"

int main()
{
    order o1("001", "2020-04-28 11:10:00", "2020-04-28 11:20:00", "Ioannina");
    o1.add_line_item("TV", 1, 300.0);
    o1.add_line_item("CD", 20, 10.0);
    o1.add_line_item("ROUTER", 1, 100.0);
    o1.print();
}