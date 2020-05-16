# OpenGL

## GLFW

* <https://www.glfw.org/>
* [GLFW forum](https://discourse.glfw.org/)
* [Setting up OpenGL and Creating a Window in C++](https://www.youtube.com/watch?v=OR4fNpBjmq8&t=163s)

## Μεταγλώττιση και εκτέλεση σε Windows με MINGW-W64

* Μεταφόρτωση του GLFW από το <https://www.glfw.org/>
* Αντιγραφή των καταλόγων include και lib_mingw-w64 στον φάκελο dependencies

    ```sh
    $ g++ glfw_test.cpp -o glfw_test -Idependencies/include -Ldependencies/lib-mingw-w64 -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32
    $ glfw_test.exe
    ```

## Μεταγλώττιση και εκτέλεση σε OSX

* Μεταφόρτωση του GLFW από το <https://www.glfw.org/>
* Αντιγραφή των καταλόγων include και lib_macos στον φάκελο dependencies

    ```sh
    $ clang++ glfw_test.cpp -o glfw_test -Idependencies/include -Ldependencies/lib-macos -std=c++11 -stdlib=libc++ -lglfw3 -framework CoreVideo -framework OpenGL -framework IOKit -framework Cocoa -framework Carbon
    $ ./glfw_test
    ```

## Μεταγλώττιση και εκτέλεση σε Ubuntu 18.04LTS

    ```sh

    ```
