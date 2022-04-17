#include <iostream>
using namespace std;

const int CITY = 2;
const int WEEK = 7;

int main()
{
    int temperature[CITY][WEEK];

    cout << "输入第一个城市和第二个城市一周的所有温度。 \n";

    // 将值插入到温度数组中
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\n显示值:\n";

    // 访问温度数组中的值
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}