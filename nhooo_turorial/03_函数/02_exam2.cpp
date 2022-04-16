#include <iostream>
using namespace std;

int prime();

int main()
{
    int num, i, flag = 0;
    // 没有参数被传递给prime()
    num = prime();
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
    return 0;
}

// 函数的返回类型是int
int prime()
{
    int n;
    printf("输入一个正整数进行检查: ");
    cin >> n;
    return n;
}