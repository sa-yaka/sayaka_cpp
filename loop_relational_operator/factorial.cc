#include <array>
#include <ios>
#include <iostream>

const int ArSize = 101;

int main() {
  using namespace std;

  cout.setf(ios_base::fixed);

  array<long double, ArSize> factorials;
  factorials[1] = factorials[0] = 1;

  for (int i = 2; i < ArSize; i++) {
    factorials[i] = i * factorials[i - 1];
  }
  for (int i = 0; i < ArSize; i++) {
    cout << i << " != " << factorials[i] << endl;
  }
  return 0;
}