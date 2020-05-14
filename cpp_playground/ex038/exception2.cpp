#include <iostream>
#include <exception>

class MyException : public std::exception
{
};

void func()
{
    std::cout << "func() checkpoint 1" << std::endl;
    throw 1; // test case 1
    // throw 2.5; // test case 2
    // throw MyException(); // test case 3
    // throw std::exception(); // test case 4
    // throw 1.0f; // test case 5
    std::cout << "func() checkpoint 2" << std::endl;
}

int main()
{
    try
    {
        std::cout << "main() checkpoint 1" << std::endl;
        func();
        std::cout << "main() checkpoint 2" << std::endl;
    }
    catch (int)
    {
        std::cout << "catching an exception throwing an int" << std::endl;
    }
    catch (double)
    {
        std::cout << "catching an exception throwing a double" << std::endl;
    }
    catch (MyException)
    {
        std::cout << "catching an exception throwing MyException" << std::endl;
    }
    catch (...)
    {
        std::cout << "catch all exception" << std::endl;
    }
    return 0;
}

/*
// test case 1
main() checkpoint 1
func() checkpoint 1
catching an exception throwing an int

// test case 2
main() checkpoint 1
func() checkpoint 1
catching an exception throwing a double

// test case 3
main() checkpoint 1
func() checkpoint 1
catching an exception throwing MyException

// test case 4
main() checkpoint 1
func() checkpoint 1
catch all exception

// test case 5
main() checkpoint 1
func() checkpoint 1
catch all exception
*/