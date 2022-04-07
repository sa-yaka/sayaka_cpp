#include <cstring>
#include <iostream>
#include <string>
using namespace std;

union Data  // 只能存储一种类型的值
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    data.i = 10;
    cout << "data.i : " << data.i << endl;
    data.f = 220.5;
    cout << "data.f : " << data.f << endl;
    strcpy(data.str, "C programming");
    cout << "data.str : " << data.str << endl;

    cout << "data.i : " << data.i << endl
         << "data.f : " << data.f << endl
         << "data.str : " << data.str << endl;
    return 0;
}