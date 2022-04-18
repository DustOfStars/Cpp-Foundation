// 存储n个学生的成绩，并将其显示，其中n为用户输入的学生人数
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "输入学生总数: ";
    cin >> num;
    float *ptr;

    // 内存分配的浮点数组
    ptr = new float[num];

    cout << "输入学生的成绩。" << endl;
    for (int i = 0; i < num; ++i) {
        cout << "学生" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\n显示学生的成绩。" << endl;
    for (int i = 0; i < num; ++i) {
        cout << "学生" << i + 1 << " :" << *(ptr + i) << endl;
    }

    // ptr内存被释放
    delete[] ptr;

    return 0;
}