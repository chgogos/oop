#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class account
{
private:
    string name;
    double balance;

public:
    account(string n)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    account(string n, double initial_balance)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    string get_name()
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
        return "";
    }

    double get_balance()
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
        return -1.0;
    }

    void deposit(double amount)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    void withdraw(double amount)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }
};

class bank
{
private:
    vector<account> accounts;

public:
    void add_account(const account &acct)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    double get_balance(string name) const
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
        return -1.0;
    }

    void print_accounts() const
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    void deposit(string name, double amount)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    void withdraw(string name, double amount)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }

    void add_interest(double rate)
    {
        // ΝΑ ΣΥΜΠΛΗΡΩΘΕΙ
    }
};

TEST_CASE("account class test 1", "[account]")
{
    account acct("Christos");
    REQUIRE(acct.get_name() == "Christos");
    REQUIRE(acct.get_balance() == 0.0);
    acct.deposit(50.0);
    REQUIRE(acct.get_balance() == 50.0);
}

TEST_CASE("account class test 2", "[account]")
{
    account acct("Vasilis", 100.0);
    REQUIRE(acct.get_name() == "Vasilis");
    REQUIRE(acct.get_balance() == 100.0);
    acct.withdraw(50.0);
    REQUIRE(acct.get_balance() == 50.0);
    acct.withdraw(70.0);
    REQUIRE(acct.get_balance() == 50.0);
}

TEST_CASE("bank class test", "[bank]")
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


// int main()
// {
//     bank a_bank;

//     account chr("Christos");
//     account vas("Vasilis", 50.0);
//     a_bank.add_account(chr);
//     a_bank.add_account(vas);
//     a_bank.print_accounts();

//     a_bank.deposit("Christos", 10.0);
//     a_bank.deposit("Vasilis", 10.0);
//     a_bank.print_accounts();

//     a_bank.add_interest(5.5);
//     a_bank.print_accounts();

//     return 0;
// }
