# Λύση 3ης εργασίας

* [academic_year_2019_2020_semester4.txt](./academic_year_2019_2020_semester4.txt) 
* [academic_year_2019_2020_semester4_invalid.txt](./academic_year_2019_2020_semester4_invalid.txt) μη έγκυρο πρόγραμμα
  * 1) ΜΗ ΔΙΔΑΣΚΑΛΙΑ ΜΕΡΟΥΣ ΜΑΘΗΜΑΤΟΣ (ΤΕΧΝΗΤΗ ΝΟΗΜΟΣΥΝΗ - ΦΡΟΝΤΙΣΤΗΡΙΟ)
  * 2) ΤΑΥΤΟΧΡΟΝΗ ΔΙΔΑΣΚΑΛΙΑ 2 ΜΑΘΗΜΑΤΩΝ ΣΤΗΝ ΙΔΙΑ ΑΙΘΟΥΣΑ (ΠΑΡΑΣΚΕΥΗ - ΕΡΓΕ5)
  * 3) ΤΑΥΤΟΧΡΟΝΗ ΔΙΔΑΣΚΑΛΙΑ ΣΕ 2 ΜΑΘΗΜΑΤΑ ΓΙΑ ΤΟΝ ΙΔΙΟ ΔΙΔΑΣΚΟΝΤΑ (ΠΕΜΠΤΗ - ΓΚΟΓΚΟΣ)
* [academic_year_2019_2020_semester4_windows1253.txt](./academic_year_2019_2020_semester4_windows1253.txt) κωδικοποίηση ANSI - windows 1253

## Κώδικας

* <https://github.com/chgogos/oop/tree/master/lab2020/exercise3_solution>

## Windows

* Εγκαταστήστε το [Make for Windows](http://gnuwin32.sourceforge.net/packages/make.htm) για να έχετε πρόσβαση στο make στα Windows.

```sh
$ make -f makefile_win.mk
g++ -c model.cpp -o model.o -Wall -O2 -std=c++11
g++ -c util.cpp -o util.o -Wall -O2 -std=c++11
g++ -c main.cpp -o main.o -Wall -O2 -std=c++11
g++ -c db.cpp -o db.o -Wall -O2 -std=c++11
gcc -c sqlite3.c -o sqlite3.o -lpthread
g++ model.o util.o main.o db.o sqlite3.o -o main -Wall -O2 -std=c++11
g++ -c tests_main.cpp -o tests_main.o -Wall -O2 -std=c++11
g++ model.o util.o tests_main.o tests.cpp -o tests -Wall -O2 -std=c++11
$ main.exe
WINDOWS
TIMETABLE IS NOT LOADED
1. Load data from text file
2. Check validity of timetable
3. Print timetable by day
4. Print timetable by course
5. Print timetable by lecturer
6. Write data to SQLiteDB
7. Read data from SQLiteDB
8. Exit
Enter choice:
...
$ tests.exe
CHECK 1: CONSISTENT COURSE HOURS AND TEACHING HOURS
CHECK 2: NO CLASSROOM OVERLAPS
CHECK 3: NO LECTURER OVELAPS
===============================================================================
All tests passed (19 assertions in 3 test cases)
$ make -f makefile_win.mk clean
del main.exe tests.exe *.o
```

## Linux

```sh
$ make -f makefile_linux.mk
g++ -c model.cpp -o model.o -Wall -O2 -pthread -ldl -std=c++11
g++ -c util.cpp -o util.o -Wall -O2 -pthread -ldl -std=c++11
g++ -c main.cpp -o main.o -Wall -O2 -pthread -ldl -std=c++11
g++ -c db.cpp -o db.o -Wall -O2 -pthread -ldl -std=c++11
gcc -c sqlite3.c -o sqlite3.o -lpthread
g++ model.o util.o main.o db.o sqlite3.o -o main -Wall -O2 -pthread -ldl -std=c++11
g++ -c tests_main.cpp -o tests_main.o -Wall -O2 -pthread -ldl -std=c++11
g++ model.o util.o tests_main.o tests.cpp -o tests -Wall -O2 -pthread -ldl -std=c++11
$ ./main
LINUX
TIMETABLE IS NOT LOADED
1. Load data from text file
2. Check validity of timetable
3. Print timetable by day
4. Print timetable by course
5. Print timetable by lecturer
6. Write data to SQLiteDB
7. Read data from SQLiteDB
8. Exit
Enter choice:
...
$ ./tests
CHECK 1: CONSISTENT COURSE HOURS AND TEACHING HOURS
CHECK 2: NO CLASSROOM OVERLAPS
CHECK 3: NO LECTURER OVELAPS
===============================================================================
All tests passed (19 assertions in 3 test cases)
$ make -f makefile_linux.mk clean
rm main tests *.o
```

## Μεταγλώττιση και εκτέλεση κώδικα (OSX)

```sh
$ make -f makefile_osx.mk
clang++ -c model.cpp -o model.o -Wall -O2 -pedantic -std=c++11
clang++ -c util.cpp -o util.o -Wall -O2 -pedantic -std=c++11
clang++ -c main.cpp -o main.o -Wall -O2 -pedantic -std=c++11
clang++ -c db.cpp -o db.o -Wall -O2 -pedantic -std=c++11
clang++ model.o util.o main.o db.o sqlite3.o -o main -Wall -O2 -pedantic -std=c++11
clang++ model.o util.o tests_main.o tests.cpp -o tests -Wall -O2 -pedantic -std=c++11
$ ./main
MACOS
TIMETABLE IS NOT LOADED
1. Load data from text file
2. Check validity of timetable
3. Print timetable by day
4. Print timetable by course
5. Print timetable by lecturer
6. Write data to SQLiteDB
7. Read data from SQLiteDB
8. Exit
Enter choice:
...
$ ./tests
CHECK 1: CONSISTENT COURSE HOURS AND TEACHING HOURS
CHECK 2: NO CLASSROOM OVERLAPS
CHECK 3: NO LECTURER OVELAPS
===============================================================================
All tests passed (19 assertions in 3 test cases)
$ make -f makefile_osx.mk clean
rm main tests *.o
```



