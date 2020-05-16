all: glfw_test

run: glfw_test
	./glfw_test

glfw_test: glfw_test.cpp
	clang++ glfw_test.cpp -o glfw_test -Idependencies/include -Ldependencies/lib-macos -std=c++11 -stdlib=libc++ -lglfw3 -framework CoreVideo -framework OpenGL -framework IOKit -framework Cocoa -framework Carbon

clean:
	rm glfw_test