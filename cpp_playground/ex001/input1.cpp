#include <iostream>
#include <string>

int main() {
  std::string s;
  int i = 0;
  std::cout << "Input words, ctrl + d to stop" << std::endl;
  while (std::cin >> s) // είσοδος λέξη προς λέξη
  {
    i++;
    std::cout << i << ". You entered " << s << std::endl;
  }
  std::cout << "Finished" << std::endl;

  return 0;
}
