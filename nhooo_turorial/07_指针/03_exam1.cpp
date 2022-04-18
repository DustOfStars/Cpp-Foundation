#include <iostream>
using namespace std;

// 函数原型
void swap(int &, int &);

int main() {
    int a = 11, b = 22;
    cout << "交换之前" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "\n交换之后" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

// 这种方式，传引用和传值的区别在于，传值是传递的值的拷贝，传引用是传递的引用。
// 也就是说，没有拷贝的操作。