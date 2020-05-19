CXX=g++
CXXFLAGS=-O2 -std=c++14 -lglfw -lGL

all: main

run: main
	./main

main: main.cpp shapes.cpp shapes.hpp
	$(CXX) $(CXXFLAGS) main.cpp shapes.cpp -o $@

clean:
	rm main
