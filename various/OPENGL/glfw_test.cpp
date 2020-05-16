#define GL_SILENCE_DEPRECATION
#include <GLFW/glfw3.h>
#include <cmath>

void circle()
{
    const float radius = 0.25;
    const float DEG2RAD = 3.14159 / 180;
    glBegin(GL_POLYGON);
    // glBegin(GL_LINE_STRIP);
    for(int i=0;i<360;i++){
        float deg_in_rad = i * DEG2RAD;
        glVertex2f(cos(deg_in_rad)*radius, sin(deg_in_rad)*radius);
    }

    glEnd();

}

void triangle()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.5f, -0.5f);
    glEnd();
}

int main(void)
{
    GLFWwindow *window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(600, 600, "Simple shapes example", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        // triangle();
        circle();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}