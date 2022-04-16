#include <iostream>
using namespace std;

// 函数原型(声明)
int add(int, int);

int main()
{
    int num1, num2, sum;
    cout << "输入两个要相加的数字: ";
    cin >> num1 >> num2;

    // 调用函数
    sum = add(num1, num2);
    cout << "总和 = " << sum;
    return 0;
}

// 函数定义
int add(int a, int b)
{
    int add;
    add = a + b;

    // 返回语句
    return add;
}