// 运算符重载

#include <iostream>
using namespace std;

class Box {
  public:
    // 自己写个构造函数
    Box() : length(0), breadth(0), height(0) {}
    double getVolume(void) { return length * breadth * height; }

    void setLength(double len) { length = len; }

    void setBreadth(double bre) { breadth = bre; }

    void setHeight(double hei) { height = hei; }

    // 重载 加法+运算符,用于两个Box对象相加
    Box operator+(const Box &b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

  private:
    double length;
    double breadth;
    double height;
};

int main() {
    Box Box1, Box2, Box3;
    double volume = 0.0;

    Box1.setLength(12.0);
    Box1.setBreadth(13.0);
    Box1.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "Box1 的体积是: " << volume << endl;

    Box2.setLength(6.0);
    Box2.setBreadth(7.0);
    Box2.setHeight(8.0);
    volume = Box2.getVolume();
    cout << "Box2 的体积是: " << volume << endl;

    Box3 = Box1 + Box2;
    volume = Box3.getVolume();
    cout << "Box3 的体积是: " << volume << endl;

    return 0;
}
