#include <iostream>
void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count); //调用 simon n为 cin >> count 的值
	cout << "Done!" << endl;
	return 0;
}

void simon(int n) //返回类型  函数名 （参数）
{				  // {函数主体}
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}