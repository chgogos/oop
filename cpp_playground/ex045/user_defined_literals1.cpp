#include <iostream>

// User Defined Literals
// gram
long double operator"" _g(long double x)
{
    return x;
}

// kilogram
long double operator"" _kg(long double x)
{
    return x * 1000;
}

// milligram
long double operator"" _mg(long double x)
{
    return x / 1000;
}

int main(){
    long double weight = 20.6_kg + 520.0_g + 1557.0_mg;
    std::cout << "Weight in grams: " << weight << std::endl;
    std::cout << "Weight in kilos: " << weight / 1000.0 << std::endl;
    return 0;
}
