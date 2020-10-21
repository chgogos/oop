all: main tests

main: account_bank.cpp main.cpp
	g++ account_bank.cpp main.cpp -o main -std=c++11

tests: account_bank.cpp tests.cpp
	g++ account_bank.cpp tests.cpp -o tests -std=c++11

run: all
	./main
	./tests

clean:
	rm main tests

