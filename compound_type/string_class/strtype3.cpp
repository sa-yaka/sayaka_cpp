#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2); //将charr2的内容复制到charr1中 （string =）

    str1 = " paste";
    strcat(charr1, " juice"); // 将 juice附加到charr1后 （string +=）

    int len1 = str1.size();    //len1为str1中字符的个数 包括不可见字符  size() 使用句点连接要计算的字符串 name.size()
    int len2 = strlen(charr1); //len2为charr1中字符的个数 包括不可见字符 strlen使用对象名指出要计算的字符串 strlen(name)
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contaons "
         << len2 << " characters.\n";
    return 0;
}