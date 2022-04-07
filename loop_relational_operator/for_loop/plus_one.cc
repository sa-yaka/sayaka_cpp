#include <iostream>
int main()
{
    using std::cout;
    int a = 20;
    int b = 20;
    cout << "a = " << a << "; b = " << b << "\n";
    cout << "a++ = " << a++ << "; ++b = " << ++b << "\n";  // a++ 使用后修改，++b 修改后使用
    cout << "a = " << a << "; b = " << b << "\n";
    return 0;
}
