#include <cmath>
#include <iostream>
int main()
{
    using namespace std;
    double area; // int  double 声明
    cout << "Enter the floor area,in square feet, of ypur home:";
    cin >> area;
    double side;
    side = sqrt(area); // double sqrt (double) ，sqrt() 计算平方根
    cout << "That's he equivalebt of a square " << side
         << " feet to the side." << endl
         << "How fascinating" << endl;
    return 0;
}
