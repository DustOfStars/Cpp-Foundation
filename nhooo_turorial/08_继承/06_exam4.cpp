#include <iostream>
using namespace std;

// 抽象类（不允许实例化的类）
class Shape {
  protected:
    float l;

  public:
    void getData() { cin >> l; }

    // 虚函数
    virtual float calculateArea() = 0;
};

class Square : public Shape {
  public:
    float calculateArea() { return l * l; }
};

class Circle : public Shape {
  public:
    float calculateArea() { return 3.14 * l * l; }
};

int main() {
    Square s;
    Circle c;

    cout << "输入长度来计算正方形的面积: ";
    s.getData();
    cout << "正方形的面积: " << s.calculateArea();
    cout << "\n输入半径以计算圆的面积: ";
    c.getData();
    cout << "圆的面积: " << c.calculateArea();

    return 0;
}