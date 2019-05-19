#include <string>

class money
{
private:
    long amount;
    std::string currency;

public:
    money() : amount(0), currency("euro") {}
    // money(money other){}
    money(long a, std::string c) : amount(a), currency(c){}
    money& operator=(money other){}
};