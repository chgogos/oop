#include <iostream>
#include "customer.hpp"
#include "account.hpp"

int main()
{
    Customer *a_customer = new Customer("John Doe");
    Account *an_account = new Account();
    a_customer->set_account(an_account);
    an_account->set_owner(a_customer);

    std::cout << a_customer->get_name() << std::endl;

    return 0;
}