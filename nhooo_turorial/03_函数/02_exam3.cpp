#include <iostream>
using namespace std;

void prime(int);

int main()
{
    int num;
    cout << "输入一个正整数进行检查: ";
    cin >> num;

    // 参数num被传递给函数prime()
    prime(num);
    return 0;
}

// 调用函数没有返回值。 因此，函数的返回类型为void。 */
void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << n << " 不是质数。";
    }
    else
    {
        cout << n << " 是质数。";
    }
}