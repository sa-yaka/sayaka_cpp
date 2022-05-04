#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

const short MAX = 1000;

struct Staff {
  string name;
  int sex;
  int age;
  // double salaru;
  string phone;
  string address;
};

struct Addressbooks {
  struct Staff StaffArray[MAX];
  int many_staff;
};

void ShowMenu();
void AddStaff(Addressbooks *staff);
void ShowStaff(Addressbooks *staff);

int main() {
  Addressbooks staff;
  staff.many_staff = 0;
  int select = 0;

  ShowMenu();

  while (true) {
    cin >> select;
    switch (select) {
      case 1:
        AddStaff(&staff);
        break;
      case 2:
        ShowStaff(&staff);
        break;
    }
  }

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
  cout << ":) ";
}

void AddStaff(Addressbooks *staff) {
  if (staff->many_staff == MAX) {
    cout << "人数已满，无法添加";
  } else {
    string name;
    int sex;
    int age;
    // double salaru;
    string phone;
    string address;

    cout << "输入姓名\n:) ";
    cin >> name;
    staff->StaffArray[staff->many_staff].name = name;

    cout << "输入性别：\n0 -- 男\n1 -- 女\n"
         << ":) ";
    while (true) {
      cin >> sex;
      if (sex == 0 || sex == 1) {
        staff->StaffArray[staff->many_staff].sex = sex;
        break;
      } else {
        cout << "输入有误，请重新输入\n:) ";
        continue;
      }
    }

    cout << "输入年龄\n:) ";
    cin >> age;
    staff->StaffArray[staff->many_staff].age = age;

    cout << "输入电话号码\n:) ";
    cin >> phone;
    staff->StaffArray[staff->many_staff].phone = phone;

    cout << "输入地址\n:) ";
    cin >> address;
    staff->StaffArray[staff->many_staff].address = address;
    staff->many_staff++;

    cout << "添加成功\n" << endl;
    ShowMenu();
  }
}

void ShowStaff(Addressbooks *staff) {
  if (staff->many_staff == 0) {
    cout << "当前记录为空\n:) ";
  } else {
    for (int i = 0; i < staff->many_staff; i++) {
      cout << "姓名：" << staff->StaffArray[i].name << endl;
      cout << "性别：" << (staff->StaffArray[i].sex == 0 ? "男" : "女") << endl;
      cout << "年龄：" << staff->StaffArray[i].age << endl;
      cout << "电话：" << staff->StaffArray[i].phone << endl;
      cout << "地址：" << staff->StaffArray[i].address << endl;
      cout << "Done\n" << endl;
      ShowMenu();
    }
  }
}