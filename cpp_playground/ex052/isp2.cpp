#include <iostream>
#include <stdexcept>

class Livable
{
  public:
    virtual ~Livable() = default;
    virtual void eat() = 0;
    virtual void run() = 0;
};
class Flyable
{
  public:
    virtual void fly() = 0;
};

class Dove : public Livable, public Flyable
{
  public:
    ~Dove() = default;
    virtual void eat() override
    {
        std::cout << "Dove::eat" << std::endl;
    }
    virtual void run() override
    {
        std::cout << "Dove::run" << std::endl;
    }
    virtual void fly() override
    {
        std::cout << "Dove::fly" << std::endl;
    }
};

class Penguin : public Livable
{
  public:
    ~Penguin() = default;
    virtual void eat() override
    {
        std::cout << "Penguin::eat" << std::endl;
    }
    virtual void run() override
    {
        std::cout << "Penguin::run" << std::endl;
    }
};

int main()
{
    Dove *p1 = new Dove();
    p1->eat();
    p1->run();
    p1->fly();
    delete p1;

    Penguin *p2 = new Penguin();
    p2->eat();
    p2->run();
    delete p2;

    return 0;
}