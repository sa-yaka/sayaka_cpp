#include <iostream>
int main()
{
    using namespace std;
    cout << "How many carrots do you have ?" << endl;
    int carrots;
    cin >> carrots; // 不读取 \n \r （不可见）的字符
    cout << "Here are tow more.";
    carrots = carrots + 2;
    cout << "Now you have" << carrots << "carrots";
    return 0;
}