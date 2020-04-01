#include <iostream>
#include <utility>

using namespace std;
using namespace std::rel_ops;

class order
{
private:
    int items;
    double price_per_item;

public:
    order(int i, double ppi) : items(i), price_per_item(ppi) {}

    void print()
    {
        cout << "ITEMS: " << items << " PPI: " << price_per_item << endl;
    }

    bool operator==(const order &other) const
    {
        return (this->items == other.items && this->price_per_item == other.price_per_item);
    }

    bool operator<(const order &other) const
    {
        return items * price_per_item < other.items * other.price_per_item;
    }

    friend ostream &operator<<(ostream &os, const order &other)
    {
        os << "ITEMS: " << other.items << " PPI: " << other.price_per_item;
        os << " VALUE:" << other.items * other.price_per_item;
        return os;
    }
};

int main()
{
    order obj1(4, 2.5);
    // obj1.print();
    cout << obj1 << endl;
    order obj2(2, 6.0);
    // obj2.print();
    cout << obj2 << endl;

    if (obj1 == obj2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    if (obj1 < obj2)
        cout << "obj1 is cheaper" << endl;
    else if (obj1 > obj2)
        cout << "obj2 is cheaper" << endl;
    else
        cout << "same price" << endl;

    order a[] = {
        order(1, 2.0),
        order(2, 7.5),
        order(3, 2.0),
        order(5, 9.0)};

    sort(a, a + 4);

    for (int i = 0; i < 4; i++){
        // a[i].print();
        cout << a[i] << endl;
    }
}
