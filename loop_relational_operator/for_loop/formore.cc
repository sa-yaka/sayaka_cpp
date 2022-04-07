#include <iostream>
const int ArSize = 16;
int main()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;	   //将 factorials 数组的前两个元素的值设置为，LL 代表 long long 此处指生成 long long 型的 1。
	for (int i = 2; i < ArSize; i++)	   //从factorials[3]开始 前两个为一 因为 上一行把元素值设置为了1.
		factorials[i] = i * factorials[i - 1]; // 2! = 2, 3! = 3 *2 *1, 4! = 4 * 3 * 2 * 1
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl; // factorials[0] = 1, factorials[1] = 1, fac://light-city.club/sc/assets/images/wechat.jpg torials[2] = 2 * factorials[2 - 1]
	return 0;
}
