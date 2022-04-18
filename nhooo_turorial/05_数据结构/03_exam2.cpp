#include <iostream>
using namespace std;

struct Distances
{
    int feet;
    float inches;
};

int main()
{
    Distances *ptr, d;
    ptr = &d;
    cout << "Enter feet: ";
    cin >> (*ptr).feet;

    cout << "Enter inches: ";
    cin >> (*ptr).inches;

    cout << "Distance in feet: " << (*ptr).feet << endl;
    cout << "Distance in inches: " << (*ptr).inches << endl;

    return 0;
}