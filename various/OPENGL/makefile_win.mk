all: glfw_test

run: glfw_test
	glfw_test.exe

glfw_test: glfw_test.cpp
	g++ glfw_test.cpp -o glfw_test -std=c++11 -Idependencies/include -Ldependencies/lib-mingw-w64 -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32

clean:
	del glfw_test.exe