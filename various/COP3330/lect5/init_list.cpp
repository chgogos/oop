#include <iostream>

class Thing
{
public:
    Thing();      // προκαθορισμένος κατασκευαστής
    Thing(int x); // κατασκευαστής με παράμετρο
    void Print();

private:
    const int data; // σταθερό μέλος δεδομένων
};

Thing::Thing() : data(10) // λίστα αρχικοποίησης (initialization list)
{
}

Thing::Thing(int x) : data(x) // λίστα αρχικοποίησης (initialization list)
{
}

void Thing::Print()
{
    std::cout << data << std::endl;
}

int main()
{
    Thing T1, T2(5);
    T1.Print();
    T2.Print();

    return 0;
}

/* έξοδος
10
5
*/