#define GL_SILENCE_DEPRECATION

#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include <GLFW/glfw3.h>
#include "stick_figure.hpp"

using namespace std;

const int WIDTH = 1000;
const int HEIGHT = 1000;
const double MIN_DISTANCE = 10.0;

random_device rd;
mt19937 gen{rd()};

stick_figure a_small_figure(int x, int y)
{

    int head_radius = 10;
    int torso_length = 40;
    int arm_length = 50;
    int leg_length = 50;
    stick_figure sf(x, y, head_radius, torso_length, arm_length, leg_length);
    return sf;
}

class person
{
private:
    double x;
    double y;
    vector<person> nearby_persons;

public:
    person(double x, double y) : x(x), y(y){};
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
    bool is_at_risk()
    {
        return !nearby_persons.empty();
    }
    double distance(person p)
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
    void add_nearby_person(person a_person)
    {
        nearby_persons.push_back(a_person);
    }
    vector<person> get_nearby_persons()
    {
        return nearby_persons;
    }
    friend ostream &operator<<(ostream &os, person &p)
    {
        os << "[" << p.x << "," << p.y << "]";
        return os;
    }
    friend void draw_figure(person p);
};

void draw_figure(person a_person)
{
    if (a_person.is_at_risk())
        glColor3f(1, 0, 0);
    else
        glColor3f(0, 1, 0);

    stick_figure sf = a_small_figure(a_person.x, a_person.y);
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

void draw(vector<person> persons)
{
    if (!glfwInit())
        exit(-1);

    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "CORONA", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(-1);
    }

    glfwMakeContextCurrent(window);

    glViewport(0, 0, WIDTH, HEIGHT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, WIDTH, 0.0, HEIGHT, 0.0, 1.0);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        for (person p : persons)
            draw_figure(p);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
}

int main(int argc, char *argv[])
{
    int n = 100;
    if (argc == 2)
    {
        n = atoi(argv[1]);
    }

    vector<person> persons;
    uniform_real_distribution<double> dw(0, WIDTH);
    uniform_real_distribution<double> dh(0, HEIGHT);
    for (int i = 0; i < n; i++)
    {
        person p(dw(gen), dh(gen));
        persons.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double d = persons[i].distance(persons[j]);
            if (d <= MIN_DISTANCE)
            {
                persons[i].add_nearby_person(persons[j]);
                persons[j].add_nearby_person(persons[i]);
            }
        }
    }

    int c = 0;
    for (auto p : persons)
    {
        if (p.is_at_risk())
        {
            cout << p << " is nearby with " << p.get_nearby_persons().size() << " persons" << endl;
            c++;
        }
    }
    cout << "People at risk " << c << endl;

    // OPENGL

    draw(persons);
}