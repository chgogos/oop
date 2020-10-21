#include "account_bank.hpp"
#include <iostream>

using namespace std;

// account class implementation
account::account(string n) : name(n), balance(0) {}

account::account(string n, double initial_balance) : name(n), balance(initial_balance) {}

string account::get_name() const { return name; }

double account::get_balance() const { return balance; }

void account::deposit(double amount)
{
    balance += amount;
}

void account::withdraw(double amount)
{
    if (amount <= balance)
        balance -= amount;
    else
        cerr << "Insufficient balance - withdrawal aborted" << endl;
}

// bank class implementation
void bank::add_account(const account &acct)
{
    accounts.push_back(acct);
}

double bank::get_balance(string name) const
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
        if (accounts[i].get_name() == name)
            return accounts[i].get_balance();
    return -1.0;
}

void bank::print_accounts() const
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
        cout << accounts[i].get_name() << ": "
             << accounts[i].get_balance() << endl;
}

void bank::deposit(string name, double amount)
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
        if (accounts[i].get_name() == name)
            accounts[i].deposit(amount);
}

void bank::withdraw(string name, double amount)
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
        if (accounts[i].get_name() == name)
            accounts[i].withdraw(amount);
}

void bank::add_interest(double rate)
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
        accounts[i].deposit(accounts[i].get_balance() * rate / 100);
}