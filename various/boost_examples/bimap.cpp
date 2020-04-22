#include <iostream>
#include <boost/bimap.hpp>

using namespace std;
using namespace boost;

enum class Color
{
    Red,
    Green,
    Blue
};

typedef bimap<Color, string> ColorMapType;

int main()
{
    auto c = Color::Blue;
    // cout << c; // error

    ColorMapType colorTypes;
    colorTypes.insert(ColorMapType::value_type(Color::Red, "Red"));
    colorTypes.insert(ColorMapType::value_type(Color::Blue, "Blue"));
    colorTypes.insert(ColorMapType::value_type(Color::Green, "Green"));

    Color col = colorTypes.right.at("Red");
    string s = colorTypes.left.at(Color::Red);

    cout << colorTypes.left.at(c) << endl;
}
