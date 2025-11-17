#include <print>  // διαθέσιμο από C++23
#include <string>
#include <vector>

class Book {
 private:
  std::string title;
  std::string isbn;
  std::vector<int> ratings;

 public:
  Book() : title("unknown"), isbn("unknown") {}
  Book(std::string t, std::string i) : title(t), isbn(i) {}

  void add_rating(int score) {
    if (score >= 1 && score <= 5)
      ratings.push_back(score);
    else
      std::print("Invalid rating: {}\n", score);
  }

  double average_rating_value() const {
    int sum = 0;
    for (int r : ratings) sum += r;

    return static_cast<double>(sum) / ratings.size();
  }

  std::string info() const {
    if (ratings.empty()) {
      return std::format("Title: {}, ISBN: {}, no ratings", title, isbn);
    } else {
      return std::format("Title: {}, ISBN: {}, Average rating: {:.2f}", title,
                         isbn, average_rating_value());
    }
  }
};

int main() {
  Book b1("C++ Programming", "978-0-13-110362-7");
  Book b2;

  b1.add_rating(5);
  b1.add_rating(4);
  b1.add_rating(5);

  std::print("{}\n", b1.info());
  std::print("{}\n", b2.info());

  return 0;
}
