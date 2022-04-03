#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;
int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << "dollars and sue has " << sue;
	cout << "dollars deposited." << endl
		 << "Add $1 to each account." << endl
		 << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars ans Sue has " << sue; 
	cout << " dollars deposited." << endl
		 << "Poor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;   //初始化为0 ?
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Take $1 from each account." << endl
		 << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dolloars deposited." << endl
		 << "Lucky Sue!" << endl;
	return 0;
}