#include <iostream>
#include <iomanip>
#include "model.hpp"

using namespace std;

int main()
{
    order o1("0001", "2020-01-05 10:07:07", "2020-01-07 12:01:01", "Athens");
    o1.add_line_item("TV", 1, 550.0);
    o1.add_line_item("A4 PAPER", 5, 10.5);
    o1.add_line_item("Microphone", 2, 50.5);
    order o2("0002", "2020-02-07 12:20:01", "2020-02-17 19:30:20", "Ioannina");
    o2.add_line_item("CAMERA", 1, 230.0);
    o2.add_line_item("WIFI", 1, 55.9);
    order o3("0003", "2020-02-08 10:20:11", "2020-02-15 12:35:22", "Arta");
    o3.add_line_item("SSD", 1, 90.5);

    vector<order> orders;
    orders.push_back(o1);
    orders.push_back(o2);
    orders.push_back(o3);
    for (order an_order : orders)
    {
        cout << an_order << endl;
    }
}

/*
ORDER NUMBER: 0001 ORDERED TIME: 2020-01-05 10:07:07 SHIPPED TIME: 2020-01-07 12:01:01 SHIP TO: Athens
PRODUCT: TV QTY: 1 PRICE: 550
PRODUCT: A4 PAPER QTY: 5 PRICE: 10.5
PRODUCT: Microphone QTY: 2 PRICE: 50.5
ORDER NUMBER: 0002 ORDERED TIME: 2020-02-07 12:20:01 SHIPPED TIME: 2020-02-17 19:30:20 SHIP TO: Ioannina
PRODUCT: CAMERA QTY: 1 PRICE: 230
PRODUCT: WIFI QTY: 1 PRICE: 55.9
ORDER NUMBER: 0003 ORDERED TIME: 2020-02-08 10:20:11 SHIPPED TIME: 2020-02-15 12:35:22 SHIP TO: Arta
PRODUCT: SSD QTY: 1 PRICE: 90.5
*/