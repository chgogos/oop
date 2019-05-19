#include <string>
#include <exception>
#include <ostream>
#include <iomanip>

class money
{
private:
    long amount;
    std::string currency;

public:
    money() : amount(0), currency("EUR") {} // προκαθορισμένος κατασκευαστής
    money(long a, std::string c) : amount(a), currency(c) {}
    money(money &other) : amount(other.amount), currency(other.currency) {} // κατασκευαστής αντιγραφής
    money &operator=(money &other)                                          // τελεστής ανάθεσης
    {
        amount = other.amount;
        currency = other.currency;
        return *this;
    }
    money &operator=(long new_amount) // τελεστής ανάθεσης
    {
        amount = new_amount;
        return *this;
    }
    bool operator==(money &other) // υπερφόρτωση τελεστή ισότητας
    {
        return (amount == other.amount && currency == other.currency);
    }
    money &operator+(money &other)
    {
        if (currency == other.currency)
        {
            amount += other.amount;
        }
        else
        {
            throw std::exception();
        }
        return *this;
    }
    money &operator-(money &other)
    {
        if (currency == other.currency)
        {
            amount -= other.amount;
        }
        else
        {
            throw std::exception();
        }
        return *this;
    }
    money &operator*(int multiplier)
    {
        amount *= multiplier;
        return *this;
    }
    double get_as_floating_point_value() const
    {
        return amount / 100.0;
    }
    friend std::ostream &operator<<(std::ostream &os, const money &m)
    {
        os << std::fixed << std::setprecision(2) << m.get_as_floating_point_value() << " " << m.currency;
        return os;
    }
};