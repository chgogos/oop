Λύση άσκησης 1 με διαμέριση κώδικα στα αρχεία: account_bank.cpp main.cpp tests.cpp

> g++ account_bank.cpp main.cpp -o main -std=c++14
> ./main

Christos: 0
Vasilis: 50
Christos: 10
Vasilis: 60
Christos: 12.5
Vasilis: 75


> g++ account_bank.cpp tests.cpp -o tests -std=c++14
> ./tests

Insufficient balance - withdrawal aborted
===============================================================================
All tests passed (9 assertions in 3 test cases)