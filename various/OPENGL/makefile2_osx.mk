# Αν η glfw έχει εγκατασταθεί (brew install glfw)
all: glfw_test

run: glfw_test
	./glfw_test

glfw_test: glfw_test.cpp
	clang++ glfw_test.cpp -o glfw_test -std=c++11 -lglfw -framework OpenGL -framework IOKit -framework Cocoa

clean:
	rm glfw_test