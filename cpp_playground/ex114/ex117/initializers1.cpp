#include <iostream>
#include <vector>

using namespace std;

struct Point3D
{
    int x = 0, y, z;
};

void aggregate_initalizers_example()
{
    cout << "Aggregate initializer example" << endl;
    Point3D p1 = {1, 2, 3}; // aggregate initializer
    cout << "x= " << p1.x << " y=" << p1.y << " z=" << p1.z << endl;
    // Point3D p2 = {.y = 20, .z = 30}; // c++20
    // cout << "x= " << p2.x << " y=" << p2.y << " z=" << p2.z << endl;
};

class PositiveList
{
public:
    PositiveList(std::initializer_list<int> vs)
    {
        for (auto x : vs)
            if (x > 0)
                values.push_back(x);
    }

private:
    vector<int> values;
    friend ostream &operator<<(ostream&, const PositiveList&);
};

ostream &operator<<(ostream &os, const PositiveList& pl)
{
    for (auto x : pl.values)
        os << x << " ";
    return os;
}


void initializer_list_example()
{
    cout << "initializer_list example" << endl;
    PositiveList pl = {1, -3, 4, -2, 5, 6};
    cout << pl << endl;
}

int main()
{
    aggregate_initalizers_example();
    initializer_list_example();
}