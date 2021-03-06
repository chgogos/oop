#include "model.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// general
// YYYY-MM-DD hh:mm:ss --> ctime
time_t convert_string_to_ctime(string ts)
{
    struct tm tm;
    int year, month, day, hour, minute, second;
    sscanf(ts.c_str(), "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
    tm.tm_year = year - 1900;
    tm.tm_mon = month - 1;
    tm.tm_mday = day;
    tm.tm_hour = hour;
    tm.tm_min = minute;
    tm.tm_sec = second;
    tm.tm_isdst = -1;

    time_t t = mktime(&tm);
    return t;
}

// line_item

line_item::line_item(string p, int q, double pr) : product(p), quantity(q), price(pr) {}

void line_item::print()
{
    cout << "PRODUCT: " << product << " QTY: " << quantity
         << " PRICE: " << price << endl;
}

// order

order::order(string n, string o, string s, string st) : number(n), ship_to(st)
{
    ordered = convert_string_to_ctime(o);
    shipped = convert_string_to_ctime(s);
}

void order::print()
{
    cout << "NUMBER: " << number << " ORDERED: " << put_time(localtime(&ordered), "%Y-%m-%d %H:%M:%S")
         << " SHIPPED: " << put_time(localtime(&shipped), "%Y-%m-%d %H:%M:%S")
         << " SHIP_TO: " << ship_to << endl;
    for (line_item li : line_items)
    {
        li.print();
    }
}

void order::add_line_item(string product, int quantity, double price)
{
    line_item a_line_item(product, quantity, price);
    line_items.push_back(a_line_item);
}