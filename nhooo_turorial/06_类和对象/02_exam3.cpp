// 构造函数重载
#include <iostream>
using namespace std;

class Area {
  private:
    int length;
    int breadth;

  public:
    // 无参数构造函数
    Area() : length(5), breadth(2) {}

    // 有两个参数的构造函数
    Area(int l, int b) : length(l), breadth(b) {}

    void GetLength() {
        cout << "分别输入长度和宽度： ";
        cin >> length >> breadth;
    }

    int AreaCalculation() { return length * breadth; }

    void DisplayArea(int temp) { cout << "面积: " << temp << endl; }
};

int main() {
    Area A1, A2(2, 1);
    int temp;

    cout << "没有传递参数时的默认面积。" << endl;
    temp = A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout << "（2,1）作为参数传递时的面积。" << endl;
    temp = A2.AreaCalculation();
    A2.DisplayArea(temp);

    return 0;
}