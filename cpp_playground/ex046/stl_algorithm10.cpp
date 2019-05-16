#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// accumulate

class rectangle
{
private:
    double width;
    double height;

public:
    rectangle(double w, double h) : width(w), height(h) {}
    double area() const
    {
        return width * height;
    }
    friend std::ostream &operator<<(std::ostream &os, const rectangle &r)
    {
        os << "(" << r.width << "," << r.height << ") area = " << r.area();
        return os;
    }
};

// δυαδική συνάρτηση που πρόκειται να χρησιμοποιηθεί στο accumulate
double fun(const double lhs, const rectangle &r)
{
    return lhs + r.area();
}

int main()
{
    std::vector<rectangle> v{{3.1, 2.3}, {2.0, 7.1}, {3.9, 4.2}, {23.1, 67.2}};

    // πρόσθεσε τα εμβαδά όλων των ορθογωνίων
    std::cout << "CHECKPOINT 1" << std::endl;
    double sum = std::accumulate(v.cbegin(), v.cend(), 0.0, fun);
    std::cout << "sum of areas = " << sum << std::endl;

    // ταξινόμησε τα ορθογώνια ανά εμβαδό σε αύξουσα σειρά
    std::cout << "CHECKPOINT 2" << std::endl;
    std::sort(v.begin(), v.end(), [](rectangle a, rectangle b) { return a.area() < b.area(); });
    for (auto &r : v)
    {
        std::cout << r << std::endl;
    }

    // μέτρησε τα ορθογώνια με εμβαδό πάνω από το μέσο όρο εμβαδόν
    std::cout << "CHECKPOINT 3" << std::endl;
    double avg = sum / v.size();
    std::cout << std::count_if(v.cbegin(), v.cend(), [avg](rectangle r) { return r.area() > avg; }) << std::endl;

}