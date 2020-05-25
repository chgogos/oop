CXX=clang++
CXXFLAGS=-O2 -std=c++14 -lglfw -framework OpenGL -framework IOKit -framework Cocoa

all: main

run: main
	./main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $@

clean:
	rm main