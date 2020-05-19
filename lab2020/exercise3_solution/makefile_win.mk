# makefile for windows
CC=gcc
CXX=g++
CXXFLAGS=-Wall -O2 -std=c++11

all: main tests

run: main
	./main

run_tests: tests
	./tests -r compact

sqlite3.o: sqlite3.c
	$(CC) -c sqlite3.c -o sqlite3.o -lpthread

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

main: model.o util.o main.o db.o sqlite3.o 
	$(CXX) $^ -o $@ $(CXXFLAGS)

tests: model.o util.o tests_main.o tests.cpp
	$(CXX) $^ -o $@ $(CXXFLAGS)

clean:
	del main.exe tests.exe *.o