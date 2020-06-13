#include <string>
using namespace std;

class account
{
private:
    string name;
    double balance;

public:
    account(string name);
    double get_balance();
    void deposit(double amount);
    bool withdraw(double amount);
    void info();
};