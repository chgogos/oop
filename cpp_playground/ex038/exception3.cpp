#include <iostream>
#include <exception>

class MyException : public std::exception
{
  public:
    virtual const char *what() const throw()
    {
        return "my exception";
    }
};

void func2();

void func1()
{
    std::cout << "func1() checkpoint 1" << std::endl;
    try
    {
        func2();
    }
    catch (MyException &ex)
    {
        throw ex;
    }
    std::cout << "func1() checkpoint 2" << std::endl;
}

void func2()
{
    std::cout << "func2() checkpoint 1" << std::endl;
    throw MyException();
    std::cout << "func2() checkpoint 2" << std::endl;
}

int main()
{
    try
    {
        std::cout << "main() checkpoint 1" << std::endl;
        func1();
        std::cout << "main() checkpoint 2" << std::endl;
    }
    catch (MyException &ex)
    {
        std::cout << "Exception catched: " << ex.what() << std::endl;
    }
    return 0;
}

/*
main() checkpoint 1
func1() checkpoint 1
func2() checkpoint 1
Exception catched: my exception
*/