#include <iostream>
using namespace std;

// 函数原型
void swap(int *, int *); // 声明部分，传入指针

int main() {
    int a = 1, b = 2;
    cout << "交换之前" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a, &b); // 传引用，注意这里的&

    cout << "\n交换之后" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void swap(int *n1, int *n2) {
    int temp;
    temp = *n1; // 解引用，得到n1的值
    *n1 = *n2;
    *n2 = temp;
}