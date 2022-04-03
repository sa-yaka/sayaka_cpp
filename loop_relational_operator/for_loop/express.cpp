#include <iostream>
using namespace std;
int main()
{
	int x;

	cout << "The espression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x >3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha); //函数调用了一个标记，命令cout显示true和false，而不是0和1。
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	return 0;
}
