#include <string>
#include <ctime>
#include <vector>

using namespace std;

class line_item
{
private:
    string product;
    int quantity;
    double price;

public:
    line_item(string p, int q, double pr);
    void print();
};

class order
{
    private:
        string number;
        time_t ordered;
        time_t shipped;
        string ship_to;
        vector<line_item> line_items;
    public:
        order(string n, string o, string s, string st);
        void print();
};