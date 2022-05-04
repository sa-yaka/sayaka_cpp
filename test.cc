#include <iostream>

using std::cout;
using std::endl;

void ShowMenu();
int main() {
  ShowMenu();
  return 0;
}

void ShowMenu() {
  cout << "*********************" << endl;
  cout << "*** staff manager ***" << endl;
  cout << "**** 1、添加职员 ****" << endl;
  cout << "**** 2、显示职员 ****" << endl;
  cout << "**** 3、删除职员 ****" << endl;
  cout << "**** 4、查找职员 ****" << endl;
  cout << "**** 5、修改职员 ****" << endl;
  cout << "**** 6、清空职员 ****" << endl;
  cout << "**** 7、退出系统 ****" << endl;
  cout << "*********************" << endl;
}