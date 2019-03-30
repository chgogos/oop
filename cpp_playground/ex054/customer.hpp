#pragma once

#include "owner.hpp"
#include "account.hpp"
#include <string>

class Customer : public Owner
{
  private:
    std::string name;
    Account *customer_account;

  public:
    Customer(std::string n = "") : name(n) {}
    void set_account(Account *account)
    {
        customer_account = account;
    }
    virtual std::string get_name() const override
    {
        return name;
    }
};
