#include <iostream>
int main()
{
    using namespace std;
    int dounts = 6;
    double cups = 4.5;

    cout << "dounts value = " << dounts;
    cout << " and dounts address = " << &dounts << endl; // &name 表示 name 在内存中的地址

    cout << "cups value = " << cups;
    cout << "and cups address = " << &cups << endl;
    return 0;
}