#define GL_SILENCE_DEPRECATION

#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include <GLFW/glfw3.h>

using namespace std;

const int WIDTH = 640;
const int HEIGHT = 480;
const double MIN_DISTANCE = 10.0;
const double head_radius = 3.0;
const double body_length = 8.0;
const double arm_length = 10.0;
const double leg_length = 10.0;
const double spread = 5.0;

random_device rd;
mt19937 gen{rd()};

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
};

void draw_figure(person p)
{
    const float DEG2RAD = 3.14159 / 180;
    if (p.is_at_risk())
        glColor3f(1, 0, 0);
    else
        glColor3f(0, 1, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float deg_in_rad = i * DEG2RAD;
        glVertex2f(p.get_x() + cos(deg_in_rad) * head_radius, p.get_y() + sin(deg_in_rad) * head_radius);
    }
    glEnd();
    glLineWidth(1);
    // body
    glBegin(GL_LINES);
    glVertex2f(p.get_x(), p.get_y() - head_radius);
    glVertex2f(p.get_x(), p.get_y() - head_radius - body_length);
    glEnd();
    // left arm
    glBegin(GL_LINES);
    glVertex2f(p.get_x(), p.get_y() - head_radius);
    glVertex2f(p.get_x() - spread, p.get_y() - head_radius - arm_length);
    glEnd();
    // right arm
    glBegin(GL_LINES);
    glVertex2f(p.get_x(), p.get_y() - head_radius);
    glVertex2f(p.get_x() + spread, p.get_y() - head_radius - arm_length);
    glEnd();
    // left leg
    glBegin(GL_LINES);
    glVertex2f(p.get_x(), p.get_y() - head_radius - body_length);
    glVertex2f(p.get_x() - spread, p.get_y() - head_radius - body_length - leg_length);
    glEnd();
    // right leg
    glBegin(GL_LINES);
    glVertex2f(p.get_x(), p.get_y() - head_radius - body_length);
    glVertex2f(p.get_x() + spread, p.get_y() - head_radius - body_length - leg_length);
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
    draw(persons);
}