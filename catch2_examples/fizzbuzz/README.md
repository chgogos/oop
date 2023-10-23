# Παράδειγμα με catch

Παράδειγμα παρόμοιο με το <https://shrishailsgajbhar.github.io/post/Programming-TTD-Using-Cpp-Catch2>

* [catch.hpp](./catch.hpp) Εναλλακτικά το catch.hpp μπορεί να κατέβει από το branch v2.x του https://github.com/catchorg/Catch2 (βρίσκεται στον κατάλογο single_include/catch2)
* [fizzbuzz.hpp](./fizzbuzz.hpp)
* [fizzbuzz.hpp](./fizzbuzz.cpp)
* [test.cpp](./tests.cpp)
* [main.cpp](./tests.cpp)

***Εκτέλεση ελέγχων***
```
> g++ fizzbuzz.cpp tests.cpp -o tests -std=c++17
> tests.exe
===============================================================================
All tests passed (11 assertions in 4 test cases)
```

***Εκτέλεση της "εφαρμογής"***
```
> g++ fizzbuzz.cpp main.cpp -o main
> main.exe
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
Fizz
22
23
Fizz
Buzz
26
Fizz
28
29
FizzBuzz
```
