#include <iostream>
#include <stdexcept>

class Bird
{
  public:
    virtual ~Bird() = default;
    virtual void eat() = 0;
    virtual void run() = 0;
    virtual void fly() = 0;
};

class Dove : public Bird
{
    public:
    ~Dove()=default;
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

class Penguin : public Bird
{
    public:
    ~Penguin() =default;
    virtual void eat() override
    {
        std::cout << "Penguin::eat" << std::endl;
    }
    virtual void run() override
    {
        std::cout << "Penguin::run" << std::endl;
    }
    virtual void fly() override
    {
        throw std::runtime_error("penguins can't fly");
    }
};

int main()
{
    Bird* p1 = new Dove();
    p1->eat();
    p1->run();
    p1->fly();
    delete p1;

    Bird* p2 = new Penguin();
    p2->eat();
    p2->run();
    p2->fly();
    delete p2;

    return 0;
}