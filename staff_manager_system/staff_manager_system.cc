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
int IsExist(Addressbooks *staff, string name);
void RemoveStaff(Addressbooks *staff);
void FindStaff(Addressbooks *staff);
void ResetStaff(Addressbooks *staff);
void CleanStaff(Addressbooks *staff);

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
      case 3:
        RemoveStaff(&staff);
        break;
      case 4:
        FindStaff(&staff);
        break;
      case 5:
        ResetStaff(&staff);
        break;
      case 6:
        CleanStaff(&staff);
        break;
      case 0:
        cout << "退出" << endl;
        return 0;
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
    cin.get();
    getline(cin, name);
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
    cin.get();
    getline(cin, address);
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
    for (int i = 0; i <= staff->many_staff; i++) {
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

int IsExist(Addressbooks *staff, string name) {
  for (int i = 0; i <= staff->many_staff; i++) {
    if (staff->StaffArray[i].name == name) {
      return i;
    }
  }
  return -1;
}

void RemoveStaff(Addressbooks *staff) {
  string name;
  cout << "输入要删除的职员\n:) ";
  cin.get();
  getline(cin, name);

  int check = IsExist(staff, name);
  if (check == -1) {
    cout << "没有相关记录" << endl;
  } else {
    for (int i = 0; i <= staff->many_staff; i++) {
      staff->StaffArray[i] = staff->StaffArray[i + 1];
    }
    staff->many_staff--;
    cout << "删除成功" << endl;
  }
}

void FindStaff(Addressbooks *staff) {
  cout << "输入要删除的职员\n:)";
  string name;
  cin.get();
  getline(cin, name);

  int check = IsExist(staff, name);
  if (check == -1) {
    cout << "没有相关记录" << endl;
  } else {
    cout << "姓名：" << staff->StaffArray[check].name << endl;
    cout << "性别：" << (staff->StaffArray[check].sex == 0 ? "男" : "女")
         << endl;
    cout << "年龄：" << staff->StaffArray[check].age << endl;
    cout << "电话：" << staff->StaffArray[check].phone << endl;
    cout << "地址：" << staff->StaffArray[check].address << endl;
    cout << "Done\n" << endl;
  }
}

void ResetStaff(Addressbooks *staff) {
  cout << "输入要重设的职员姓名\n:) ";
  string name;
  cin.get();
  getline(cin, name);

  int check = IsExist(staff, name);

  if (check == -1) {
    cout << "没有相关记录";
  } else {
    int sex;
    int age;
    // double salaru;
    string phone;
    string address;

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
    cin.get();
    getline(cin, address);
    staff->StaffArray[staff->many_staff].address = address;
    staff->many_staff++;

    cout << "修改成功\n" << endl;
    ShowMenu();
  }
}

void CleanStaff(Addressbooks *staff) {
  staff->many_staff = 0;
  cout << "记录已清空" << endl;
}