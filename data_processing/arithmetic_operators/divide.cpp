#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division : 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl; //将5（int）转化为5.0（double）
    cout << "double constants: 1e7/9.0 = ";
    cout << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = ";
    cout << 1e7f / 9.f << endl;
    return 0;
}