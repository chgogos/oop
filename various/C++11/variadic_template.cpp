// Variadic templates in C++
// https://eli.thegreenplace.net/2014/variadic-templates-in-c/

#include <iostream>

using namespace std;

template <typename T>
T adder(T v)
{
    std::cout << __PRETTY_FUNCTION__ << "\n";
    return v;
}

template <typename T, typename... Args>
T adder(T first, Args... args)
{
    std::cout << __PRETTY_FUNCTION__ << "\n";
    return first + adder(args...);
}

int main()
{
    long sum = adder(1, 2, 3, 8, 7);

    std::string s1 = "x", s2 = "aa", s3 = "bb", s4 = "yy";
    std::string ssum = adder(s1, s2, s3, s4);
}

/*
T adder(T, Args ...) [with T = int; Args = {int, int, int, int}]
T adder(T, Args ...) [with T = int; Args = {int, int, int}]
T adder(T, Args ...) [with T = int; Args = {int, int}]
T adder(T, Args ...) [with T = int; Args = {int}]
T adder(T) [with T = int]
T adder(T, Args ...) [with T = std::__cxx11::basic_string<char>; Args = {std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >}]
T adder(T, Args ...) [with T = std::__cxx11::basic_string<char>; Args = {std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >}]
T adder(T, Args ...) [with T = std::__cxx11::basic_string<char>; Args = {std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >}]
T adder(T) [with T = std::__cxx11::basic_string<char>]
*/