
#include <iostream>
#include "account.hpp"
#include "customer.hpp"

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