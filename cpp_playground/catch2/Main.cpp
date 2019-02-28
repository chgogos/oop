#include "catch.hpp"
#include <iostream>

class Rectangle{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {}

        int area(){
            return width * height;
        }
};

int main(){

}