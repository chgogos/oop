#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "account_bank.hpp"

TEST_CASE("account class is tested - 1", "[account]")
{
    account acct("Christos");
    REQUIRE(acct.get_name() == "Christos");
    REQUIRE(acct.get_balance() == 0.0);
    acct.deposit(50.0);
    REQUIRE(acct.get_balance() == 50.0);
}

TEST_CASE("account class is tested - 2", "[account]")
{
    account acct("Vasilis", 100.0);
    REQUIRE(acct.get_name() == "Vasilis");
    REQUIRE(acct.get_balance() == 100.0);
    acct.withdraw(50.0);
    REQUIRE(acct.get_balance() == 50.0);
    acct.withdraw(70.0);
    REQUIRE(acct.get_balance() == 50.0);
}

TEST_CASE("bank class is tested - 1", "[bank]")
{
    bank a_bank;
    for (int i = 0; i < 100; i++)
    {
        account acct("customer" + to_string(i), 100.0);
        a_bank.add_account(acct);
    }
    a_bank.deposit("customer42", 50.0);
    a_bank.withdraw("customer42", 10.0);
    REQUIRE(a_bank.get_balance("customer42") == 140.0);
    a_bank.add_interest(1.5);
    REQUIRE(a_bank.get_balance("customer46") == 101.5);
}


