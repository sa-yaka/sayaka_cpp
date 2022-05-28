#include <iostream>

int main() {
  int n = 0;
  for (int i = 99; i >= 1; i--) {
    n = n + i;
  }
  std::cout << n;
}