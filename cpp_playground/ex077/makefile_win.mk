CXX=g++
CXXFLAGS=-Wall -O2 -std=c++17

main: main.cpp paper.cpp researcher.cpp
	$(CXX) main.cpp paper.cpp researcher.cpp -o main $(CXXFLAGS)

clean:
	del *.exe