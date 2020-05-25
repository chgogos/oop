#define GL_SILENCE_DEPRECATION

#include <vector>
#include <thread>
#include <random>
#include <GLFW/glfw3.h>

const double PI = 3.1415;
const double arm_angle = PI / 6;
const double leg_angle = PI / 10;

using namespace std;

struct point
{
    int x, y;
};

class stick_figure
{
public:
    point head_center;
    int head_radius;
    int torso_length;
    int arm_length;
    int leg_length;

    stick_figure(int hcx, int hcy, int hr, int tl, int al, int ll) : head_center{hcx, hcy}, head_radius(hr), torso_length(tl), arm_length(al), leg_length(ll)
    {
    }
    point get_torso_top()
    {
        point p{head_center.x, head_center.y - head_radius};
        return p;
    }
    point get_torso_down()
    {
        point p{head_center.x, head_center.y - head_radius - torso_length};
        return p;
    }
    point get_left_arm_down()
    {
        point p{int(head_center.x - sin(arm_angle) * arm_length), int(head_center.y - head_radius - arm_length * cos(arm_angle))};
        return p;
    }
    point get_right_arm_down()
    {
        point p{int(head_center.x + sin(arm_angle) * arm_length), int(head_center.y - head_radius - arm_length * cos(arm_angle))};
        return p;
    }
    point get_left_leg_down()
    {
        point p{int(head_center.x - sin(leg_angle) * leg_length), int(head_center.y - head_radius - torso_length - leg_length * cos(leg_angle))};
        return p;
    }
    point get_right_leg_down()
    {
        point p{int(head_center.x + sin(leg_angle) * leg_length), int(head_center.y - head_radius - torso_length - leg_length * cos(leg_angle))};
        return p;
    }
};

const int WIDTH = 1000, HEIGHT = 1000;

stick_figure full_screen_stick_figure()
{
    // HEAD=20%, BODY=40%, LEGS=40%
    int head_center_x = WIDTH / 2;
    int head_center_y = HEIGHT * 0.9;
    int head_radius = HEIGHT * 0.1;
    int torso_length = HEIGHT * 0.4;
    int arm_length = HEIGHT * 0.4;
    int leg_length = HEIGHT * 0.4 / cos(leg_angle);
    stick_figure sf(head_center_x, head_center_y, head_radius, torso_length, arm_length, leg_length);
    return sf;
}

stick_figure a_small_figure()
{
    int head_center_x = WIDTH / 4;
    int head_center_y = HEIGHT / 5;
    int head_radius = 10;
    int torso_length = 40;
    int arm_length = 50;
    int leg_length = 50;
    stick_figure sf(head_center_x, head_center_y, head_radius, torso_length, arm_length, leg_length);
    return sf;
}

void draw_stick_figure(stick_figure sf)
{
    const float DEG2RAD = PI / 180;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float deg_in_rad = i * DEG2RAD;
        glVertex2f(sf.head_center.x + cos(deg_in_rad) * sf.head_radius, sf.head_center.y + sin(deg_in_rad) * sf.head_radius);
    }
    glEnd();
    // body
    glBegin(GL_LINES);
    point p = sf.get_torso_top();
    glVertex2f(p.x, p.y);
    p = sf.get_torso_down();
    glVertex2f(p.x, p.y);
    glEnd();
    // left arm
    glBegin(GL_LINES);
    p = sf.get_torso_top();
    glVertex2f(p.x, p.y);
    p = sf.get_left_arm_down();
    glVertex2f(p.x, p.y);
    glEnd();
    // right arm
    glBegin(GL_LINES);
    p = sf.get_torso_top();
    glVertex2f(p.x, p.y);
    p = sf.get_right_arm_down();
    glVertex2f(p.x, p.y);
    glEnd();
    // left leg
    glBegin(GL_LINES);
    p = sf.get_torso_down();
    glVertex2f(p.x, p.y);
    p = sf.get_left_leg_down();
    glVertex2f(p.x, p.y);
    glEnd();
    // // right leg
    glBegin(GL_LINES);
    p = sf.get_torso_down();
    glVertex2f(p.x, p.y);
    p = sf.get_right_leg_down();
    glVertex2f(p.x, p.y);
    glEnd();
}

int main()
{
    if (!glfwInit())
        return -1;

    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Stick Figure", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glViewport(0, 0, WIDTH, HEIGHT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, WIDTH, 0.0, HEIGHT, 0.0, 1.0);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        stick_figure sf1 = full_screen_stick_figure();
        glLineWidth(1);
        glColor3f(0, 1, 0);
        draw_stick_figure(sf1);

        stick_figure sf2 = a_small_figure();
        glLineWidth(5);
        glColor3f(1, 0, 0);
        draw_stick_figure(sf2);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
