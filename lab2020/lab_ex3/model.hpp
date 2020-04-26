#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

// YYYY-MM-DD hh:mm:ss
time_t convert_string_to_ctime(string ts);

class line_item
{
private:
    string product_;
    int quantity_;
    double price_;

public:
    line_item(string prodeuct, int quantity, double price);
    friend ostream &operator<<(ostream &os, const line_item &a_line_item);
};

class order
{
private:
    string number_;
    time_t ordered_;
    time_t shipped_;
    string ship_to_;
    vector<line_item> line_items_;

public:
    order(string number, string ordered, string shipped, string ship_to);

    string get_number()
    {
        return number_;
    }

    void add_line_item(string product, int quantity, double price);

    friend ostream &operator<<(ostream &os, const order &an_order);
};