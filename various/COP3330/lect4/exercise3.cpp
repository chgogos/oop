#include <iostream>
#include <string>

class FileHandler {
 private:
  std::string filename;

 public:
  FileHandler(const std::string& name) : filename(name) {
    std::cout << "Opening file: " << filename << std::endl;
  }

  ~FileHandler() { std::cout << "Closing file: " << filename << std::endl; }
};

int main() {
  std::cout << "Program started\n";
  FileHandler f1("data.txt");
  {
    FileHandler f2("temp.txt");
    std::cout << "Inside inner block\n";
  }  // ο destructor του f2 καλείται εδώ
  std::cout << "Exited inner block\n";
  std::cout << "Program ending\n";
  return 0;
}  // ο destructor του f1 καλείται εδώ
