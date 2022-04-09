#include <fstream>
#include <ios>
#include <iostream>

int main() {
  using namespace std;

  char automobile[50];
  int year;
  double a_price;
  double d_price;

  ofstream outFile;
  outFile.open("carinfo");

  cout << "Enter the make and model of automobile: ";
  cin.getline(automobile, 50);
  cout << "Enter the model year: ";
  cin >> year;
  cout << "Enter the original asking price: ";
  cin >> a_price;
  d_price = 0.913 * a_price;

  cout << fixed;  // 浮点输出应该以固定点或小数点表示法显示
  cout.precision(2);  // 设置小数点后位数
  cout.setf(ios_base::showpoint);
  cout << "Make and model: " << automobile << endl;
  cout << "Year: " << year << endl;
  cout << "Was asking $" << a_price << endl;
  cout << "Now asking $" << d_price << endl;

  outFile << fixed;
  outFile.precision(2);
  outFile.setf(ios_base::showpoint);
  outFile << "Make and model: " << automobile << endl;
  outFile << "Year: " << year << endl;
  outFile << "Was asking $" << a_price << endl;
  outFile << "Now asking $" << d_price << endl;

  outFile.close();
  return 0;
}