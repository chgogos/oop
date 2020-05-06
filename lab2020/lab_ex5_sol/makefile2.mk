CXX=g++ 
CXXFLAGS=-Wall -std=c++11

all: main tests

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

main: linked_list.o main.o
	$(CXX) $^ -o $@ $(CXXFLAGS)

tests: linked_list.o tests_main.o tests.cpp
	$(CXX) $^ -o $@ $(CXXFLAGS)

clean:
	rm main tests *.o
