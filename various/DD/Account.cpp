#include <iostream>

class Account
{
  private:
    int balance;

  public:
    Account(int b) : balance(b)
    {
        if (b < 0)
        {
            std::cout << "Error, balance cannot be negative" << std::endl;
            balance = 0;
        }
    }

    void credit(int amount)
    {
        balance += amount;
    }
    
    void debit(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            std::cout << "Error, not enough funds" << std::endl;
        }
    }   

    int getBalance(){
        return balance;
    }
};

int main(){
    Account acc(50);
    std::cout << "account balance :" << acc.getBalance() << std::endl;
    int withdrawalAmount;
    std::cout << "Enter withdrawal amount: ";
    std::cin >> withdrawalAmount;
    acc.debit(withdrawalAmount);
    std::cout << "account balance :" << acc.getBalance() << std::endl;
}