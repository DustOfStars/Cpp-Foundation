// 练习构造函数使用
// 这个程序实现计算矩形面积

#include <iostream>
using namespace std;

class Area {
  private:
    int length;
    int breadth;

  public:
    // 构造函数
    Area() : length(5), breadth(2) {}

    void GetLength() {
        cout << "输入长度和宽度: ";
        cin >> length >> breadth;
    }

    int AreaCalculation() { return (length * breadth); }

    void DisplayArea(int temp) { cout << "面积: " << temp; }
};

int main() {
    Area A1, A2;
    int temp;

    A1.GetLength();
    temp = A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout << "不从用户获取值,默认面积为: " << endl;

    temp = A2.AreaCalculation();
    A2.DisplayArea(temp);

    return 0;
}
