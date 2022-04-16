#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number, squareRoot;
    cout << "输入一个数字: ";
    cin >> number;

    // sqrt()是一个用于计算平方根的库函数
    squareRoot = sqrt(number);
    cout << "数字 " << number << " 的平方根= " << squareRoot;
    return 0;
}