// Γράψτε ένα πρόγραμμα που να δημιουργεί ένα σύνολο από 10 σημεία στο καρτεσιανό επίπεδο. 
// Γράψτε μια συνάρτηση distance που να επιστρέφει την απόσταση δύο σημείων. 
// Ορίστε τη συνάρτηση ως inline και εντοπίστε τα σημεία που απέχουν τη μικρότερη απόσταση.

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

struct point
{
    double x, y;
};

inline double distance(point p1, point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

int main()
{
    point points[5]={{3.1, 2.7}, {2.1, 3.2}, {4.2, 3.7}, {8.1, 3.0}, {2.6, 1.2}};

    double min = numeric_limits<double>::max();
    int p1, p2;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            double d = distance(points[i], points[j]);
            if (d < min){
                min =d;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout << "Point (" << points[p1].x << ", " << points[p1].y << ")"<< endl;
    cout << "Point (" << points[p2].x << ", " << points[p2].y << ")" << endl;
    cout << "Min distance: " << min << endl;

}

/*
Point (3.1, 2.7)
Point (2.1, 3.2)
Min distance: 1.11803
*/