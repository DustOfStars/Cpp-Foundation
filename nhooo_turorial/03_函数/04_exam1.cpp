// c++程序演示默认参数的工作方式

#include <iostream>
using namespace std;

void display(char = '*', int = 1);

int main()
{
    cout << "没有参数传递:\n";
    display();

    cout << "\n第一个参数被传递:\n";
    display('#');

    cout << "\n两个参数被传递:\n";
    display('$', 5);

    return 0;
}

void display(char c, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << c;
    }
    cout << endl;
}