#include <iostream>
using namespace std;

void display(int);
void display(float);
void display(int, float);

int main()
{
    int a = 5;
    float b = 5.5;

    display(a);
    display(b);
    display(a, b);

    return 0;
}

void display(int var)
{
    cout << "整数: " << var << endl;
}

void display(float var)
{
    cout << "浮点数: " << var << endl;
}

void display(int var1, float var2)
{
    cout << "整数: " << var1;
    cout << " 和浮点数:" << var2;
}