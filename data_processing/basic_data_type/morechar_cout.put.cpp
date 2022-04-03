#include <iostream>
using namespace std;
int main()
{
	char ch = 'A'; //char把 ch 初始化为 'A' 然后设置为 65  存储为字符编码
	int i = ch;	   //将之值赋予变量 i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code: " << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Displaying char ch using cont.put(ch): ";
	cout.put(ch); //cout.put() 将字符编码打印为字符
	cout.put('!');

	cout << endl
		 << "Done" << endl;
	return 0;
}