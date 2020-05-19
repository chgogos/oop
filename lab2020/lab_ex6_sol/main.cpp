#define GL_SILENCE_DEPRECATION

#include "shapes.hpp"
#include <vector>
#include <thread>
#include <random>
#include <GLFW/glfw3.h>

using namespace std;
using namespace std::chrono_literals;

vector<shape *> shapes;
bool flag = true;
int shape_index = 0;

void cyclic_draw(int tid)
{
    while (flag)
    {
        cerr << shape_index << endl;
        this_thread::sleep_for(500ms);
        shape_index = (shape_index + 1) % shapes.size();
    }
}

void three_shapes()
{
    shapes.push_back(new triangle(-0.5f, -0.5f, 0.0f, 0.5f, 0.5f, -0.5f));
    shapes.push_back(new rectangle(-0.5f, 0.5f, 0.5f, -0.5f));
    shapes.push_back(new circle(0.0f, 0.0f, 0.5f));
}

void random_shapes(int n)
{
    random_device rd;
    mt19937 gen{rd()};
    uniform_int_distribution<int> uid(1, 3);
    uniform_real_distribution<float> urd(-1.0, 1.0);
    uniform_real_distribution<float> urd2(0.0, 1.0);
    for (int i = 0; i < n; i++)
    {
        shape *a_shape;
        int r = uid(gen);
        if (r == 1)
        {
            a_shape = new triangle(urd(gen), urd(gen), urd(gen), urd(gen), urd(gen), urd(gen));
        }
        else if (r == 2)
        {
            a_shape = new rectangle(urd(gen), urd(gen), urd(gen), urd(gen));
        }
        else
        {
            a_shape = new circle(urd(gen), urd(gen), urd(gen) / 2);
        }
        a_shape->set_color(urd2(gen), urd2(gen), urd2(gen));
        shapes.push_back(a_shape);
    }
}

int main()
{
    // three_shapes();
    random_shapes(20);

    thread th = thread(&cyclic_draw, 1);

    if (!glfwInit())
        return -1;

    GLFWwindow *window = glfwCreateWindow(600, 600, "Shapes slideshow", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        shapes[shape_index]->draw();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    flag = false;

    th.join();
    for (auto p : shapes)
    {
        delete p;
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
