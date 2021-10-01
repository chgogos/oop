# Catch2 examples

## 1 Catch2 (Catch v2.11.1) με χρήση ενός μόνο header (catch.hpp)

* [test.cpp](./v2/test.cpp)
* [test2.cpp](./v2/test2.cpp)
* [test3.cpp](./v2/test3.cpp) παράδειγμα με Approx
* [catch.hpp](./v2/catch.hpp)

Εντολές μεταγλώττισης και εκτέλεσης

    $ g++ test.cpp -o test -std=c++14
    $ test.exe

    $ g++ test2.cpp -o test2 -std=c++14
    $ test2.exe

    $ g++ test3.cpp -o test3 -std=c++14
    $ test2.exe


### 1.1 Catch2 (Catch v2.11.1) με χρήση ενός μόνο header (catch.hpp) ταχύτερη μεταγλώττιση

* [test.cpp](./v2_fast/test.cpp)
* [tests_main.cpp](./v2_fast/tests_main.cpp)
* [catch.hpp](./v2_fast/catch.hpp)

Εκτέλεση της επόμενης εντολής 1 μόνο φορά για δημιουργία του object file (tests_main.o)

    $ g++ -c tests_main.cpp -o tests_main.o -std=c++14

Εντολές μεταγλώττισης και εκτέλεσης

    $ g++ tests_main.o test.cpp -o test -std=c++14
    $ test.exe

## 2. Catch2 (Catch v3) με χρήση του header file (catch_amalgamated.hpp) και του source file (catch_amalgamated.cpp)

Παράδειγμα από το <https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md>.

* [test.cpp](./v3/test.cpp)
* [catch-amalgamated.hpp](./v3/catch-amalgamated.hpp)
* [catch-amalgamated.cpp](./v3/catch-amalgamated.cpp)

Εντολές μεταγλώττισης και εκτέλεσης

    $ g++ test.cpp catch_amalgamated.cpp -o test -std=c++14
    $ test.exe
