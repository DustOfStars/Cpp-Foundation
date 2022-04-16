#include <iostream>
using namespace std;

// 全局变量
int num;

// 函数声明
int &test();

int main()
{
    test() = 5;
    cout << num;
    return 0;
}

int &test()
{
    return num;
}