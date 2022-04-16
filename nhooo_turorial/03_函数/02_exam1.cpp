#include <iostream>
using namespace std;

void prime();
int main()
{
    // 没有参数传递给prime()
    prime();
    return 0;
}

// 函数的返回类型为void，因为未返回值。
// 判断一个数是否为素数
void prime()
{

    int num, i, flag = 0;
    cout << "输入一个正整数进行检查: ";
    cin >> num;
    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " 不是质数。";
    }
    else
    {
        cout << num << " 是质数。";
    }
}