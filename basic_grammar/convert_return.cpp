#include <iostream>
int stonetolb(int); //return_type functionname (paramater type ?)
using namespace std;
int main()
{
	int stone;
	cout << "Enter the weight in stone:";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << "stone = ";
	cout << pounds << "pounds" << endl;
}

int stonetolb(int sts)   //return_type functionname (paramater list)
{
	return 14 * sts; // 返回值 可以是 表达式 数字
}
