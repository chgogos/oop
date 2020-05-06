all: main tests

linked_list.o: linked_list.cpp
	g++ linked_list.cpp -c -std=c++11

main.o: main.cpp
	g++ main.cpp -c -std=c++11

tests_main.o: tests_main.cpp
	g++ tests_main.cpp -c -std=c++11

main: linked_list.o main.o
	g++ linked_list.o main.o -o main -std=c++11

tests: linked_list.o tests_main.o tests.cpp
	g++ linked_list.o tests_main.o tests.cpp -o tests -std=c++11

clean:
	rm main tests *.o
