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
    $ gcc shell.c sqlite3.c -o sqlite3 -lpthread
    $ ./sqlite3
    sqlite> .quit
    ```

3. Μεταγλώττιση του sqlite3.c με gcc και δημιουργία του αρχείου αντικειμένου sqlite3.o

    ```bash
    $ gcc sqlite3.c -c -lpthread
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

    ## Πρόσβαση στα δεδομένα του προγράμματος μέσω του shell της SQLite3

    ```bash
    $ ./sqlite3
    SQLite version 3.31.1 2020-01-27 19:55:54
    Enter ".help" for usage hints.
    Connected to a transient in-memory database.
    Use ".open FILENAME" to reopen on a persistent database.    
    sqlite> .open test.db
    sqlite> select * from orders;
    0001|2020-01-05 10:07:07|2020-01-07 12:01:01|Athens
    0002|2020-02-07 12:20:01|2020-02-17 19:30:20|Ioannina
    0003|2020-02-08 10:20:11|2020-02-15 12:35:22|Arta
    sqlite> select * from line_items;
    TV|1|550.0|0001
    A4 PAPER|5|10.5|0001
    Microphone|2|50.5|0001
    CAMERA|1|230.0|0002
    WIFI|1|55.9|0002
    SSD|1|90.5|0003
    sqlite> select * from orders, line_items where number=order_fk and number='0001';
    0001|2020-01-05 10:07:07|2020-01-07 12:01:01|Athens|A4 PAPER|5|10.5|0001
    0001|2020-01-05 10:07:07|2020-01-07 12:01:01|Athens|Microphone|2|50.5|0001
    0001|2020-01-05 10:07:07|2020-01-07 12:01:01|Athens|TV|1|550.0|0001
    ```
