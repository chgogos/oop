# Ultra Simple Calculator (using wxWidgets)

* [baseframe.h](./baseframe.h)
* [baseframe.cpp](./baseframe.cpp)
* [usc.cpp](./usc.cpp)

## Μεταγλώττιση και εκτέλεση στα Windows

    > g++ usc.cpp baseframe.cpp -IC:\\wxWidgets-3.1.4\\include -IC:\\wxWidgets-3.1.4\\lib\\gcc_dll\\mswu -LC:\\wxWidgets-3.1.4\\lib\\gcc_dll -lwxmsw31u_core -lwxbase31u -o usc
    > usc.exe

## Μεταγλώττιση και εκτέλεση σε Linux (π.χ. Ubuntu 18.04) και στο OSX

    $ g++ usc.cpp baseframe.cpp `wx-config --cxxflags --libs` -o usc
    ./usc

