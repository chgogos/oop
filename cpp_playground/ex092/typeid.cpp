#include <iostream>
#include <vector>

using namespace std;

class Base
{
protected:
    int a;

public:
    virtual ~Base() {}
    virtual void info() = 0;
};

class DerivedA : public Base
{
public:
    void info()
    {
    }
};

class DerivedB : public Base
{
public:
    void info()
    {
    }
};

int main()
{
    vector<Base *> v;
    v.push_back(new DerivedA());
    v.push_back(new DerivedB());
    v.push_back(new DerivedB());
    v.push_back(new DerivedA());
    for (Base *obj : v)
    {
        // αναγνώριση του είδους της υποκλάσης που βρίσκεται "πίσω" από έναν pointer
        if (typeid(*obj) == typeid(DerivedA))
            cout << "DerivedA" << endl;
        if (typeid(*obj) == typeid(DerivedB))
            cout << "DerivedB" << endl;

        DerivedA *obja = dynamic_cast<DerivedA *>(obj); // αν δεν είναι δείκτης προς DerivedA επιστρέφει nullptr
        if (obja != nullptr)
            cout << "DerivedA" << endl;

        DerivedB *objb = dynamic_cast<DerivedB *>(obj);
        if (objb != nullptr)
            cout << "DerivedB" << endl;

        delete obj;
    }
}