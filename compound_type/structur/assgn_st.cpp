#include <iostream>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable bouqute = {
        "sumflowers",
        0.20,
        12.49,
    };
    inflatable choice;
    cout << "bouqute: " << bouqute.name << " for $";
    cout << bouqute.price << endl;

    choice = bouqute;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
