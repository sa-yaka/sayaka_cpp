#include <iostream>
using namespace std;
int main()
{
    int auks, bats, coost;

    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;  //old C
    coost = int(19.99) + int(11.99); //new cpp
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coost << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}