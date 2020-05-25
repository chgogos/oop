CXX=g++
CXXFLAGS=-std=c++14 -O2 -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32

all: main

run: main
	main.exe

main: shapes.cpp shapes.hpp main.cpp
	$(CXX) shapes.cpp main.cpp -o $@ -Idependencies/include -Ldependencies/lib-mingw-w64 $(CXXFLAGS)

clean:
	del main.exe