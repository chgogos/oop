# Ultra Simple Calculator (using wxWidgets)

## Μεταγλώττιση και εκτέλεση στα Windows

    > g++ usc.cpp baseframe.cpp -IC:\\wxWidgets-3.1.4\\include -IC:\\wxWidgets-3.1.4\\lib\\gcc_dll\\mswu -LC:\\wxWidgets-3.1.4\\lib\\gcc_dll -lwxmsw31u_core -lwxbase31u -o usc
    > usc.exe

## Μεταγλώττιση και εκτέλεση στο OSX

    $ g++ usc.cpp baseframe.cpp `wx-config --cxxflags --libs` -o usc
    ./usc

