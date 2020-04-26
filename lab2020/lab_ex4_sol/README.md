# ΑΣΚΗΣΗ C++ και SQLite

## Λύση άσκησης

* Μεταγλώττιση του κώδικα C++ (main.cpp, model.cpp) με g++

* [model.hpp](./model.hpp)
* [model.cpp](./model.cpp)
* [main1.cpp](./main1.cpp)

    ```bash
    $ g++ main1.cpp model.cpp -o main1 -std=c++17
    ./main1
    ```

## Επιπλέον ερωτήματα

1. Download SQLite amalgamation <https://www.sqlite.org/download.html>
2. Δημιουργία του shell της SQLite3

* [sqlite3.h](./sqlite3.h)
* [sqlite3.c](./sqlite3.c)
* [shell.c](./shell.c)

    ```bash
    $ gcc shell.c sqlite3.c -o sqlite3 -lpthread -ldl
    $ ./sqlite3
    sqlite> .quit
    ```

3. Μεταγλώττιση του sqlite3.c με gcc και δημιουργία του αρχείου αντικειμένου sqlite3.o

    ```bash
    $ gcc sqlite3.c -c -lpthread -ldl
    ```

4. Μεταγλώττιση του κώδικα C++ (main.cpp, model.cpp) με g++

* [model.hpp](./model.hpp)
* [model.cpp](./model.cpp)
* [main2.cpp](./main2.cpp)

    ```bash
    $ g++ main2.cpp model.cpp sqlite3.o -o main2 -std=c++17
    ```

5. Εκτέλεση

* επιλογή 1
  
    ```bash
    .\main2
    1. drop tables, create and populate DB
    2. retrieve data from DB
    1
    db created and populated
    ```

* επιλογή 2

    ```bash
    .\main2
    1. drop tables, create and populate DB
    2. retrieve data from DB
    2
    ORDER NUMBER: 0001 ORDERED TIME: 2020-01-05 10:07:07 SHIPPED TIME: 2020-01-07 12:01:01 SHIP TO: Athens
    PRODUCT: TV QTY: 1 PRICE: 550
    PRODUCT: A4 PAPER QTY: 5 PRICE: 10.5
    PRODUCT: Microphone QTY: 2 PRICE: 50.5
    #####################################################
    ORDER NUMBER: 0002 ORDERED TIME: 2020-02-07 12:20:01 SHIPPED TIME: 2020-02-17 19:30:20 SHIP TO: Ioannina
    PRODUCT: CAMERA QTY: 1 PRICE: 230
    PRODUCT: WIFI QTY: 1 PRICE: 55.9
    #####################################################
    ORDER NUMBER: 0003 ORDERED TIME: 2020-02-08 10:20:11 SHIPPED TIME: 2020-02-15 12:35:22 SHIP TO: Arta
    PRODUCT: SSD QTY: 1 PRICE: 90.5
    #####################################################
    ```