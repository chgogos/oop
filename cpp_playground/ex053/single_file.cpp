// Παράδειγμα με ορισμό και δήλώση κλάσεων Account και Customer στο ίδιο αρχείο κώδικα

#include <iostream>

class Account; // forward declaration

class Customer
{
  private:
    std::string name;
    Account *customer_account;

  public:
    Customer(std::string n = "") : name(n) {}

    std::string get_name() const
    {
        return name;
    }

    void set_account(Account *account)
    {
        customer_account = account;
    }
};

class Account
{
  private:
    Customer *owner;

  public:
    void set_customer(Customer *customer)
    {
        owner = customer;
    }
};

int main()
{
    Account *account = new Account();
    Customer *customer = new Customer("John Doe");
    account->set_customer(customer);
    customer->set_account(account);

    std::cout << customer->get_name() << std::endl;

    delete account;
    delete customer;
    return 0;
}

/*
John Doe
*/