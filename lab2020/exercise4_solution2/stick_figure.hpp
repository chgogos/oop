#pragma once

#include <cmath>

const double PI = 3.1415;
const double arm_angle = PI / 6;
const double leg_angle = PI / 10;

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
