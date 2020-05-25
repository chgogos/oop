#include <string>
#include <iostream>
#include <utility>

using namespace std::rel_ops;

// ορίζονται μόνο οι overloaded operators < και ==
// με το
// #include <utility>
// και το
// using namespace std::rel_ops;
// ορίζονται αυτόματα οι συμπληρωματικοί τους

class customer
{
  private:
    std::string name;
    double balance;

  public:
    customer(std::string n, double b) : name(n), balance(b) {}

    bool operator<(const customer &other) const
    {
        return this->balance < other.balance;
    }

    bool operator==(const customer &other) const
    {
        return this->balance == other.balance;
    }

    void print()
    {
        std::cout << name << " - " << balance << std::endl;
    }
};

int main()
{
    customer customer1("Nikos", 100);
    customer customer2("Maria", 200);

    std::cout << "Lowest balance" << std::endl;
    if (customer1 < customer2)
    {
        customer1.print();
    }
    else
    {
        customer2.print();
    }

    std::cout << "Highest balance" << std::endl;
    if (customer1 > customer2)
    {
        customer1.print();
    }
    else
    {
        customer2.print();
    }

    customer customer3("Nikos", 100);
    std::cout << "Check equality" << std::endl;
    if (customer1 == customer3)
    {
        customer1.print();
        customer3.print();
    }

    std::cout << "Check inequality" << std::endl;
    if (customer1 != customer2)
    {
        customer1.print();
        customer2.print();
    }
}


/*
Lowest balance
Nikos - 100
Highest balance
Maria - 200
Check equality
Nikos - 100
Nikos - 100
Check inequality
Nikos - 100
Maria - 200
*/