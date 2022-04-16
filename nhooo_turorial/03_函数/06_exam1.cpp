// n的阶乘 = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "输入一个数字来查找阶乘: ";
    cin >> n;
    cout << "数字 " << n << " 的阶乘= " << factorial(n);
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}