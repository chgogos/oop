all: glfw_test

run: glfw_test
	./glfw_test

glfw_test: glfw_test.cpp
	g++ glfw_test.cpp -o glfw_test -std=c++11 -lglfw -lGL

clean:
	rm glfw_test