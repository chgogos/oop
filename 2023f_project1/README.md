# Παραδείγματα κώδικα

## Ένας απλός μετρητής χρόνου για 2 λεπτά

***Windows & Linux & MacOS***

* [timer1.cpp](./timer1.cpp)
  
```
$ g++ timer1.cpp -o timer1
$ ./timer1
```

## Μετρητής χρόνου με ncurses

* [timer2_ncurses.cpp](./timer2_ncurses.cpp)

<!-- ***MacOS***


***Linux*** -->

Θα πρέπει να έχει εγκατασταθεί η βιβλιοθήκη ncurses

```
$ g++ timer2_ncurses.cpp -o timer2_ncurses -lncurses
$ ./timer2_ncurses
```

## Εκκαθάριση περιεχομένων κονσόλας - clear screen

***Linux & MacOS***

* [clearscr_linux.cpp](./clearscr_linux.cpp)

***Windows***

* [clearscr_windows.cpp](./clearscr_windows.cpp)
