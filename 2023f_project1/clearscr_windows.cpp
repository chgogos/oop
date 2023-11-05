#include <iostream>
#include <windows.h>

using namespace std;

void setEcho(bool enable) {
  HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
  DWORD mode;
  GetConsoleMode(hStdin, &mode);
  if (!enable) {
    mode &= ~ENABLE_ECHO_INPUT;
  } else {
    mode |= ENABLE_ECHO_INPUT;
  }
  SetConsoleMode(hStdin, mode);
}

int main() {
  setEcho(false); // Disable echo
  cout << "Press any key to clear screen" << endl;
  char c = cin.get();
  cout << "\033[2J\033[1;1H";
  cout << "You pressed " << c << endl;
  setEcho(true); // Enable echo
  return 0;
}
