#include "model.hpp"
#include <iostream>

using namespace std;


line_item::line_item(string p, int q, double pr): product(p), quantity(q), price(pr) {}

void line_item::print(){
    cout << "PRODUCT: " << product << " QTY: " << quantity 
    << " PRICE: " <<price << endl;
}