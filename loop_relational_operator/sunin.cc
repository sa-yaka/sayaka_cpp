#include <iostream>
int main() {
  using namespace std;
  double temp, sum = 0;
  do {
    cout << "Input a numeral to add: ";
    cin >> temp;
    sum += temp;
  } while (temp != 0);

  cout << "Input end.\n"
       << "The sum = " << sum << endl;
  return 0;
}