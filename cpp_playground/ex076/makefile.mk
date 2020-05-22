CXX=g++
CXXFLAGS=-Wall -O2 -std=c++17

main:
	$(CXX) main.cpp company.cpp employee.cpp -o main $(CXXFLAGS)

clean:
	del main.exe