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
        name = n;
        balance = 0.0;
    }

    account(string n, double initial_balance)
    {
        name = n;
        balance = initial_balance;
    }

    string get_name() const
    {
        return name;
    }

    double get_balance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cerr << "Insufficient balance - withdrawal aborted" << endl;
    }
};

class bank
{
private:
    vector<account> accounts;

public:
    void add_account(const account &acct)
    {
        accounts.push_back(acct);
    }

    double get_balance(string name) const
    {
        int size = accounts.size();
        for (int i = 0; i < size; i++)
            if (accounts[i].get_name() == name)
                return accounts[i].get_balance();
        return -1.0;
    }

    void print_accounts() const
    {
        int size = accounts.size();
        for (int i = 0; i < size; i++)
            cout << accounts[i].get_name() << ": "
                 << accounts[i].get_balance() << endl;
    }

    void deposit(string name, double amount)
    {
        int size = accounts.size();
        for (int i = 0; i < size; i++)
            if (accounts[i].get_name() == name)
                accounts[i].deposit(amount);
    }

    // εναλλακτική υλοποίηση της deposit με range based for
    // void deposit(string name, double amount)
    // {
    //     for (account &acc: accounts) // προσοχή στο reference
    //         if (acc.get_name() == name)
    //             acc.deposit(amount);
    // }

    void withdraw(string name, double amount)
    {
        int size = accounts.size();
        for (int i = 0; i < size; i++)
            if (accounts[i].get_name() == name)
                accounts[i].withdraw(amount);
    }

    void add_interest(double rate)
    {
        int size = accounts.size();
        for (int i = 0; i < size; i++)
            accounts[i].deposit(accounts[i].get_balance() * rate / 100);
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
