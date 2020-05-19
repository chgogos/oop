CC=clang
CXX=clang++
CXXFLAGS=-Wall -O2 -pedantic -std=c++11

all: main tests

run: main
	./main

run_tests: tests
	./tests -r compact

sqlite3.o: sqlite3.c
	$(CC) -c sqlite3.c -o sqlite3.o

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

main: model.o util.o main.o db.o sqlite3.o 
	$(CXX) $^ -o $@ $(CXXFLAGS)

tests: model.o util.o tests_main.o tests.cpp
	$(CXX) $^ -o $@ $(CXXFLAGS)

clean:
	rm main tests *.o