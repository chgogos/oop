#include "account_bank.hpp"

int main()
{
    bank a_bank;

    account christos("Christos");
    account vasilis("Vasilis", 50.0);
    a_bank.add_account(christos);
    a_bank.add_account(vasilis);
    a_bank.print_accounts();

    a_bank.deposit("Christos", 10.0);
    a_bank.deposit("Vasilis", 10.0);
    a_bank.print_accounts();

    a_bank.add_interest(25);
    a_bank.print_accounts();

    return 0;
}