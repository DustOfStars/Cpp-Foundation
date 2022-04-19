//如果将两个字符传递给函数模板，则显示ASCII值较大的字符。

#include <iostream>
using namespace std;

// template function
template <class T> T Large(T n1, T n2) { return (n1 > n2) ? n1 : n2; }

int main() {
    int i1, i2;
    float f1, f2;
    char c1, c2;

    cout << "输入两个整数:\n";
    cin >> i1 >> i2;
    cout << Large(i1, i2) << " 更大。" << endl;

    cout << "\n输入两个浮点数:\n";
    cin >> f1 >> f2;
    cout << Large(f1, f2) << " 更大。" << endl;

    cout << "\n输入两个字符:\n";
    cin >> c1 >> c2;
    cout << Large(c1, c2) << " 具有较大的ASCII值。";

    return 0;
}