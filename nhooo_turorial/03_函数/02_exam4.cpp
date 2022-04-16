#include <iostream>
using namespace std;

int prime(int);

int main()
{
    int num, flag = 0;
    cout << "输入正整数进行检查: ";
    cin >> num;

    // 参数num被传递给 prime()函数
    flag = prime(num);

    if (flag == 1)
        cout << num << " 不是质数。";
    else
        cout << num << " 是质数。";
    return 0;
}

/* 此函数返回整数值。 */
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}