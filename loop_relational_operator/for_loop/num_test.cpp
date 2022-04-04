#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the starting countdown value: ";
    int limilt;
    cin >> limilt;
    int i;
    for (i = limilt; i; i--)
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;
    return 0;
}
