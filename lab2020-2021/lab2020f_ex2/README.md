# Κώδικας έναρξης της εργαστηριακής άσκησης 2

* [Complex.hpp](./Complex.hpp)
* [Complex.cpp](./Complex.cpp)
* [Main.cpp](./Main.cpp)
* [Tests.cpp](./Tests.cpp)
* [catch.hpp](./catch.hpp)

Οι εντολές μεταγλώττισης και εκτέλεσης του κώδικα είναι:

    $ g++ Complex.cpp Main.cpp -o Main -std=c++11 
    $ Main.exe
    5 + 3i
    2 - 4i
    7 - 1i

Οι εντολές μεταγλώττισης και εκτέλεσης των unit tests είναι:

    $ g++ Complex.cpp Tests.cpp -o Tests -std=c++11
    $ ./Tests
    ===============================================================================
    All tests passed (4 assertions in 1 test case)
