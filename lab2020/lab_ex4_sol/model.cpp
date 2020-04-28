#include "model.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


// δεν λειτουργεί σε windows
// time_t convert_string_to_ctime(string ts)
// {
//     struct tm tm;
//     strptime(ts.c_str(), "%Y-%m-%d %H:%M:%S", &tm);
//     time_t t = mktime(&tm);
//     return t;
// }

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

line_item::line_item(string product, int quantity, double price) : product_(product), quantity_(quantity), price_(price) {}

ostream &operator<<(ostream &os, const line_item &a_line_item)
{
    os << "PRODUCT: " << a_line_item.product_;
    os << " QTY: " << a_line_item.quantity_;
    os << " PRICE: " << a_line_item.price_;
    return os;
}

// order

order::order(string number, string ordered, string shipped, string ship_to) : number_(number), ship_to_(ship_to)
{
    ordered_ = convert_string_to_ctime(ordered);
    shipped_ = convert_string_to_ctime(shipped);
}

void order::add_line_item(string product, int quantity, double price)
{
    line_items_.push_back(line_item(product, quantity, price));
}

ostream &operator<<(ostream &os, const order &an_order)
{
    os << "ORDER NUMBER: " << an_order.number_;
    os << " ORDERED TIME: " << put_time(localtime(&an_order.ordered_), "%Y-%m-%d %H:%M:%S");
    os << " SHIPPED TIME: " << put_time(localtime(&an_order.shipped_), "%Y-%m-%d %H:%M:%S");
    os << " SHIP TO: " << an_order.ship_to_;
    for (line_item li : an_order.line_items_)
    {
        os << "\n"
           << li;
    }
    return os;
}