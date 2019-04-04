#include <iostream>

struct Customer
{
    int id;
    std::string firstName;
    std::string lastName;
    double balance;
};

int main()
{
    Customer customers[] = {{1, "Nikos", "Pappas", 200.0},
                            {2, "Petros", "Raptis", 300.0},
                            {3, "Maria", "Tefa", 100.0},
                            {4, "Kostas", "Zitis", 450.0}};
    double sum = 0.0;
    for (int i = 0; i < 4; i++)
    {
        sum += customers[i].balance;
    }
    double avg = sum / 4;
    std::cout << "Average balance: " << avg << std::endl;

    std::cout << "Customers having higher balance than the average balance" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (customers[i].balance > avg)
            std::cout << "Customer: " << customers[i].lastName << " "
                      << customers[i].firstName << " " << customers[i].balance << std::endl;
    }

    return 0;
}
