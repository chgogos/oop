// Delegating Constructor (C++11)

class SomeType
{
    int number;

  public:
    SomeType(int newNumber) : number(newNumber) {}
    SomeType() : SomeType(42) {}
};