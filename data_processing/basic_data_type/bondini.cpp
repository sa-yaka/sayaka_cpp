#include <iostream>
using namespace std;
int main()
{
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:_______ \b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with :Plan Z3!\n";
    return 0;
}

/*
换行符     \n
水平制表符  \t
垂直制表符  \v
退格       \b
回车       \r
振铃       \a
*/