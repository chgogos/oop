#include <iostream>
#include <ostream>
#include <vector>
#include <algorithm>

class image
{
private:
    int width;
    int height;
    int color_depth;

public:
    image(int w, int h, int cd) : width(w), height(h), color_depth(cd) {}

    int get_color_depth()
    {
        return color_depth;
    }

    void set_color_depth(int cd)
    {
        color_depth = cd;
    }

    int get_size() const
    {
        return width * height * color_depth;
    }

    bool operator<(const image &other) const
    {
        return this->get_size() > other.get_size();
    }

    friend std::ostream &operator<<(std::ostream &os, const image &im)
    {
        os << "WIDTH:" << im.width << " HEIGHT: " << im.height << " COLOR DEPTH: " << im.color_depth << " SIZE: " << im.get_size();
        return os;
    }
};

int main()
{
    std::vector<image> images{{640, 360, 3}, {1024, 768, 2}, {800, 600, 4}, {1280, 1024, 2}};
    std::sort(images.begin(), images.end());
    std::cout << "SORTED" << std::endl;
    for (image im : images)
    {
        std::cout << im << std::endl;
    }

    std::cout << "REVERSE SORTED" << std::endl;
    for (auto itr = images.rbegin(); itr != images.rend(); itr++)
    {
        std::cout << *itr << std::endl;
    }
}