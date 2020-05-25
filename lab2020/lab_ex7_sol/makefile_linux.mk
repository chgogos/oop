CXX=g++
CXXFLAGS=-O2 -std=c++14 -lglfw -lGL

all: main

run: main
	./main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $@

clean:
	rm main
