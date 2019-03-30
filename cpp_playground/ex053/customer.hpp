#pragma once
#include <string>

class Account; // forward declaration (μπορούν να δηλωθούν μόνο δείκτες ή αναφορές προς τον τύπο μέχρι να δηλωθεί πλήρως στη συνέχεια)

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
