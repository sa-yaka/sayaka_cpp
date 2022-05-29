#include <iostream>

unsigned c_in_str(const char *str, char ch);

int main() {
  using namespace std;

  char mmm[15] = "minimum";
  char *wail = (char *)"ululate";

  unsigned ms = c_in_str(mmm, 'm');
  unsigned us = c_in_str(wail, 'u');
  cout << ms << " m characters in " << mmm << endl;
  cout << us << " u characters in " << wail << endl;

  return 0;
}

unsigned c_in_str(const char *str, char ch) {
  unsigned count = 0;

  while (*str) {
    if (*str == ch) {
      count++;
    }
    str++;
  }

  return count;
}