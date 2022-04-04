#include <iostream>
using namespace std;
int main()
{
    int higgens = 5;
    int weigth = 2;
    int *pt = &higgens;
    cout << "Value of higgens = " << higgens
         << ";\nAddress of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << ";\nValue of pt = " << pt << endl;

    int *wih;
    wih = &weigth;
    cout << "Value of *wih = " << *wih
         << ";\nValue of wih = " << wih << endl;
    return 0;
}