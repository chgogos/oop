all: mylist.o test_driver.o
	g++ mylist.o test_driver.o
mylist.o: mylist.h mylist.cpp
	g++ -c mylist.cpp
test_driver.o: mylist.h test_driver.cpp
	g++ -c test_driver.cpp
clean:
	rm -f *~
	rm -f *.o
	rm -f a.out