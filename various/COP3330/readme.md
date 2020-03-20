# COP3330

[COP3330/CGS5409: Object-oriented Programming in C++](http://www.cs.fsu.edu/~xyuan/cop3330/)

* Κλάση Circle [sample1.cpp](./sample1.cpp)

    ```sh
    $ g++ circle.cpp sample1.cpp -o sample1
    $ ./sample1
    The area of C1 is 3.14
    The area of C2 is 314
    The area of C1 is 12.56
    The area of C2 is 28.26
    ```

* Κλάση Circle (διάσπαση κώδικα σε header file, implementation file, main) [circle.hpp](./sample1/circle.hpp), [circle.cpp](./sample1/circle.cpp), [main.cpp](./sample1/main.cpp)

    ```sh
    $ cd sample1
    $ g++ circle.cpp main.cpp -o main
    $ ./main
    The area of C1 is 3.14
    The area of C2 is 314
    The area of C1 is 12.56
    The area of C2 is 28.26
    ```
