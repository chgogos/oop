#include <string>

struct mapping{
    unsigned int arabic;
    std::string roman;
};

const mapping arabic_to_roman[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};

std::string convert_arabic_to_roman(unsigned int x){
    std::string roman;    
    for (auto ar: arabic_to_roman){
        while (x>=ar.arabic){
            roman += ar.roman;
            x -= ar.arabic;
        }
    }
    return roman;
}
