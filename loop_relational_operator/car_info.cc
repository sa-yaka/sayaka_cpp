#include <iostream>
#include <string>

using namespace std;

struct car_info {
  string manufacturer;
  int date;
};

int main() {
  int car_number;
  car_info *pcar;

  cout << "How many cars do you wish to catalog? ";
  cin >> car_number;

  cin.get();
  pcar = new car_info[car_number];

  for (int i = 0; i < car_number; i++) {
    cout << "Car #" << i + 1 << " :\n";
    cout << "Please enter the maker: ";
    getline(cin, pcar[i].manufacturer);
    cout << "Please enter the year made: ";
    cin >> pcar[i].date;
    cin.get();
  }

  cout << "Here is you collection:\n";

  for (int i = 0; i < car_number; i++) {
    cout << pcar[i].date << " " << pcar[i].manufacturer << endl;
  }

  return 0;
}

/*
一点疑惑：
  cin 读取可见字符，所以换行符就还在输入流中，
  所以 line 18 的 cin.get() 就是为了丢弃换行符。
*/