// https://stackoverflow.com/questions/4384765/whats-the-difference-between-pretty-function-function-func

#include <iostream>

int main(int argc, char **argv)
{
    std::cout << __func__ << std::endl
              << __FUNCTION__ << std::endl
              << __PRETTY_FUNCTION__ << std::endl;
}


/*
https://stackoverflow.com/questions/4384765/whats-the-difference-between-pretty-function-function-func
*/