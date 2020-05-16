glfw_test: glfw_test.cpp
	g++ glfw_test.cpp -o glfw_test -Idependencies/include -Ldependencies/lib-mingw-w64 -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32