#include <iostream>
using namespace std;

class Test {
  private:
    int num;
    float *ptr;

  public:
    // 构造函数
    Test() {
        cout << "输入学生总数: ";
        cin >> num;

        ptr = new float[num];

        cout << "输入学生的成绩。" << endl;
        for (int i = 0; i < num; ++i) {
            cout << "学生" << i + 1 << ": ";
            cin >> *(ptr + i);
        }
    }

    // 析构函数
    ~Test() { delete[] ptr; }

    void Display() {
        cout << "\n显示学生的成绩。" << endl;
        for (int i = 0; i < num; ++i) {
            cout << "学生" << i + 1 << " :" << *(ptr + i) << endl;
        }
    }
};

int main() {
    Test s;
    s.Display();
    return 0;
}

// 创建对象s时，将自动调用构造函数，该构造函数为num个浮点数据分配内存。
// 当对象被销毁时，即，对象超出范围时（出来函数，不再需要这个对象），将自动调用析构函数。