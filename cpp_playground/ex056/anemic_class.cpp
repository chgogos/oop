#include <iostream>

// η κλάση Customer είναι anemic καθώς περιέχει μόνο getters και setters και δεν περιλαμβάνει κάποια λογική
// είναι καλύτερο να υλοποιηθεί με ένα απλό struct
class Customer
{
  private:
    int id;
    std::string firstName;
    std::string lastName;
    double balance;

  public:
    Customer(int i, std::string fn, std::string ln, double b) : id(i), firstName(fn), lastName(ln), balance(b) {}

    int getId()
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    std::string getFirstName()
    {
        return firstName;
    }

    void setFirstName(std::string fn)
    {
        firstName = fn;
    }

    std::string getLastName()
    {
        return lastName;
    }

    void setLastName(std::string ln)
    {
        lastName = ln;
    }

    double getBalance()
    {
        return balance;
    }
    
    void setBalance(double ba)
    {
        this->balance = ba;
    }
};

int main()
{
    Customer customers[] = {Customer(1, "Nikos", "Pappas", 200.0),
                            Customer(2, "Petros", "Raptis", 300.0),
                            Customer(3, "Maria", "Tefa", 100.0),
                            Customer(4, "Kostas", "Zitis", 450.0)};
    double sum = 0.0;
    for (int i = 0; i < 4; i++)
    {
        sum += customers[i].getBalance();
    }
    double avg = sum / 4;
    std::cout << "Average balance: " << avg << std::endl;

    std::cout << "Customers having higher balance than the average balance" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (customers[i].getBalance() > avg)
            std::cout << "Customer: " << customers[i].getLastName() << " "
                      << customers[i].getFirstName() << " " << customers[i].getBalance() << std::endl;
    }

    return 0;
}