#include <bits/types/clock_t.h>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starating\a\n";
    clock_t start = clock();
    while (clock() - start < delay);
    cout << "done \a\n";
    cout << CLOCKS_PER_SEC;
    return 0;
}