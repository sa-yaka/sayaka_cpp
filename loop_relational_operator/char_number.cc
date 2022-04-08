#include <iostream>
#include <string>

using namespace std;
const char FINISHED[] = "done";

int main() {
  string words;
  int counter = 0;
  cout << "Enter words (to stop, type the word donr):" << endl;
  while (words != FINISHED) {
    cin >> words;
    cin.get();
    counter++;
  }

  cout << "You entered a total of " << counter - 1 << " words." << endl;
  return 0;
}