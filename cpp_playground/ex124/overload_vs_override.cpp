#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
    virtual void processPayment(double amount) const {
        cout << "Processing a generic payment of EUR: " << amount << endl;
    }

    void displayPaymentInfo(const string& currency, double amount) const {
        cout << "Payment of " << amount << " " << currency << endl;
    }

    void displayPaymentInfo(double amount) const {
        cout << "Payment of " << amount << " EUR" <<endl;
    }
};

class CreditCardProcessor : public PaymentProcessor {
public:
    void processPayment(double amount) const override {
        cout << "Processing credit card payment of EUR: " << amount << endl;
    }

    void displayPaymentInfo(const string& cardType, const string& cardNumber) const {
        cout << "Credit Card Payment (" << cardType << "): **** **** **** " 
             << cardNumber.substr(cardNumber.size() - 4) << endl;
    }
};


int main() {
    PaymentProcessor genericProcessor;
    CreditCardProcessor creditCardProcessor;

    // Overloading
    genericProcessor.displayPaymentInfo(100.0);
    genericProcessor.displayPaymentInfo("USD", 100.0);         
    creditCardProcessor.displayPaymentInfo("Visa", "1234567812345678");  

    // Overriding
    genericProcessor.processPayment(50.0); 
    creditCardProcessor.processPayment(150.0);

    // Polymorphism
    PaymentProcessor* processorPtr = &creditCardProcessor;
    processorPtr->processPayment(75.0);  

    return 0;
}

/*
Payment of 100 EUR
Payment of 100 USD
Credit Card Payment (Visa): **** **** **** 5678
Processing a generic payment of EUR: 50
Processing credit card payment of EUR: 150
Processing credit card payment of EUR: 75
*/