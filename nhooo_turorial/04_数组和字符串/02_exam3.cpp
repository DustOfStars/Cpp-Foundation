#include <iostream>
using namespace std;

int main()
{
    // 这个数组最多可以存储12个元素 (2x3x2)
    int test[2][3][2];
    cout << "输入12个值: \n";

    //将值插入测试数组
    //使用3个嵌套的for循环。
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cin >> test[i][j][k];
            }
        }
    }

    cout << "\n显示已存储的值:" << endl;
    // 显示具有索引的值。
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }
    return 0;
}