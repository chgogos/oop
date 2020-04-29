#include <string>

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
};