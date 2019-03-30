#pragma once

#include "customer.hpp"

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