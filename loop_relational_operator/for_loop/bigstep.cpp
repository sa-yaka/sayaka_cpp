#include <iostream>
int main()
{
	using std::cin; // using 声明
	using std::cout;
	using std::endl;
	cout << "Ehter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << endl;
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}