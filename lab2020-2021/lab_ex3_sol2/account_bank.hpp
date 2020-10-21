#include <vector>
#include <string>
#include <vector>

using namespace std;

class account
{
private:
    string name;
    double balance;

public:
    account(string n);
    account(string n, double initial_balance);
    string get_name() const;
    double get_balance() const;
    void deposit(double amount);
    void withdraw(double amount);
};

class bank
{
private:
    vector<account> accounts;

public:
    void add_account(const account &acct);
    double get_balance(string name) const;
    void print_accounts() const;
    void deposit(string name, double amount);
    void withdraw(string name, double amount);
    void add_interest(double rate);
};
