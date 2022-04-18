#include <iostream>
using namespace std;

enum week
{
    周日,
    周一,
    周二,
    周三,
    周四,
    周五,
    周六
};

int main()
{
    week today;
    today = 周二;
    cout << "星期几?" << today + 1;
    return 0;
}