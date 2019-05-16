#include <iostream>
#include <vector>
#include <numeric> // accumulate
#include <algorithm>
#include <iterator>

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

    bool operator<(const rectangle &other) const
    {
        return area() < other.area();
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
    std::vector<rectangle> v{{3.1, 2.3}, {2.0, 7.1}, {3.9, 4.2}, {2.1, 67.2}, {5.5, 16.9}};

    // πρόσθεσε τα εμβαδά όλων των ορθογωνίων
    std::cout << "CHECKPOINT 1" << std::endl;
    double sum1 = std::accumulate(v.cbegin(), v.cend(), 0.0, fun);
    std::cout << "sum of areas = " << sum1 << std::endl;
    double sum2 = std::accumulate(v.cbegin(), v.cend(), 0.0, [](const double sum, const rectangle &r) { return sum + r.area(); });
    std::cout << "sum of areas = " << sum2 << std::endl;

    // ταξινόμησε τα ορθογώνια ανά εμβαδό σε αύξουσα σειρά, εμφάνιση λίστας
    std::cout << "CHECKPOINT 2" << std::endl;
    std::sort(v.begin(), v.end());
    for (auto &r : v)
    {
        std::cout << r << std::endl;
    }

    // ταξινόμησε τα ορθογώνια ανά εμβαδό σε φθίνουσα σειρά, εμφάνιση λίστας
    std::cout << "CHECKPOINT 3" << std::endl;
    std::sort(v.begin(), v.end(), [](rectangle a, rectangle b) { return a.area() > b.area(); });
    std::ostream_iterator<rectangle> output(std::cout, "\n");
    std::copy(v.cbegin(), v.cend(), output);

    // μέτρησε τα ορθογώνια με εμβαδό πάνω από το μέσο όρο εμβαδών
    std::cout << "CHECKPOINT 4" << std::endl;
    double avg = sum1 / v.size();
    std::cout << std::count_if(v.cbegin(), v.cend(), [avg](rectangle r) { return r.area() > avg; }) << std::endl;

    return 0;
}
