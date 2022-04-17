#include <cstdlib>
#include <fstream>
#include <iostream>

const int SIZE = 60;
int main() {
  using namespace std;
  char filename[SIZE];
  ifstream inFile;

  cout << "Enter name of data file: ";
  cin.getline(filename, SIZE);
  inFile.open(filename);
  if (!(inFile.is_open())) {  // 文件没有被打开 返回true。
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }

  double value;
  double sum = 0.0;
  int count = 0;

  // inFile >> value;
  while (inFile >> value) {  // 在需要返回布尔值的情况下 inFile >> value 的返回值为 inFile.good()
    ++count;
    sum += value;
    inFile >> value;
  }
  if (inFile.eof()) {
    cout << "End of file reached.\n";
  } else if (inFile.fail()) {
    cout << "Input terminated by data mismatch/\n";
  } else {
    cout << "Input terminated for unknown reason.\n";
  }

  if (count == 0) {
    cout << "No data processed.\n";
  } else {
    cout << "Items read: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / count << endl;
  }

  inFile.close();
  return 0;
}