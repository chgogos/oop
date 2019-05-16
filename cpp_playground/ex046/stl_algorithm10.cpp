#include <iostream>
#include <numeric>

// accumulate

class rectangle {
    private:
    double width;
    double height;
    public:
        double area() const {
            return width*height;
        }
}

double fun(double lhs, rectangle& r){
    return lhs + r.area();
}

int main(){
    vector<rectangle> v{{3.1,2.3}, {2.0, 7.1}, {3.9, 4.2}};

    double x = std::accumulate(v.cbegin(), v.cend(), 0.0, )
    std::cout << 

}