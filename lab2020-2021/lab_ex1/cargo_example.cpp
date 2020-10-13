#include <iostream>

using namespace std;

class cargo
{
public:
    // κατασκευαστές
    cargo() : id(0), destination("Undefined"), weight(0.0), fragile(false) {}
    cargo(int i, string d, double w, bool f) : id(i), destination(d), weight(w), fragile(f) {}

    // getters/setters
    double get_weight()
    {
        return weight;
    }
    void set_weight(double w)
    {
        weight = w;
    }

    // άλλες συναρτήσεις μέλη
    void show()
    {
        cout << boolalpha;
        cout << "[" << id << ", " << destination << ", " << weight << ", " << fragile << "]" << endl;
    }

    void make_safe()
    {
        if (!fragile)
        {
            fragile = true;
            weight += 5.0;
        }
    }

private:
    int id;
    string destination;
    double weight;
    bool fragile;
};

int main()
{
    cargo a[5] = {
        cargo(1, "Patras", 1000, 0),
        cargo(2, "Athens", 200, 1),
        cargo(3, "Kalamata", 2000, 0),
        cargo(4, "Patras", 1500, 1),
        cargo(5, "Athens", 1100, 0)};

    for (int i = 0; i < 5; i++)
    {
        a[i].show();
    }

    for (int i = 0; i < 5; i++)
    {
        a[i].make_safe();
    }

    cout << "###########################" << endl;

    for (int i = 0; i < 5; i++)
    {
        a[i].show();
    }
}