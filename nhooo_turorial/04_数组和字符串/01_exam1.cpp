#include <iostream>
using namespace std;

int main()
{
    int numbers[5], sum = 0;
    cout << "输入5个数字: ";

    //将用户输入的5个数字存储在数组中
    //查找输入的数字总和
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "总和 = " << sum << endl;

    return 0;
}