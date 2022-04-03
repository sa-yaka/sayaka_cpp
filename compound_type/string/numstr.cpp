#include <iostream>
using namespace std;
int main()
{
    cout << "What your was your house built?\n";
    int year;
    (cin >> year).get();
    cout << "WHat is its street addreess?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}