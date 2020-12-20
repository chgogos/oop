# Απλό GUI


## Μεταγλώττιση απευθείας με το cc

    $ cc -o graphical_hello -Wall -Werror -pedantic -std=c11 graphical_hello.c `pkg-config --cflags --libs gtk+-3.0`
    $ ./graphical_hello

## Μεταγλώττιση με το meson build system

### Προετοιμασία

    $  brew install meson ninja

### Μεταγλώττιση και εκτέλεση

    $ meson build // generate build files (run once, build is the dircetory that hosts the new files)
    $ ninja -C build -v // v=verbose, compile and link
    $ ninja -C build 
    $ ninja -C build install // install the program to the system directory

