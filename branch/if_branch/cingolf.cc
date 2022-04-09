#include <iostream>

const int Max = 5;
int main() {
  using namespace std;
  int golf[Max];
  cout << "Lpease enter your golf scores.\n";
  int i;
  cout << "You must enter " << Max << " rounds.\n";
  for (i = 0; i < Max; i++) {
    cout << "round #" << i + 1 << ": ";
    while (!(cin >> golf[i])) {
      cin.clear();
      while (cin.get() != '\n') {
        continue;
      }
      cout << "Please enter a number: ";
    }
  }
  double total = 0.0;
  for (i = 0; i < Max; i++) {
    total += golf[i];
  }
  cout << total / Max << " = average score " << Max << " rounds\n";
  return 0;
}

/*
line 10 到 line 19 是怎么回事，
它是如何判断输入的类型的。
输入正确的类型则为 true ?
*/