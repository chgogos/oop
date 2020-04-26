#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    map<int, int> months2020{{1, 31}, {2, 29}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

    int longmonths = count_if(begin(months2020), end(months2020), [](pair<int,int> elem) { return elem.second == 31; });
    cout << "long months = " << longmonths << endl;
}

/*
long months = 7
*/