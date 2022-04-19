// 多层继承，从祖父到孙
#include <iostream>
using namespace std;

class A {
  public:
    void display() { cout << "基类的内容。"; }
};

class B : public A {};

class C : public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}

// 编译器首先在类C中查找display()函数。
// 由于该函数在该类中不存在，因此它将在类B中查找该函数（因为C是从B派生的）。
// 这个display()函数在B类中也不存在，所以编译器在A类中寻找它(因为B是从A派生出来的)。
// 如果C中存在display()函数，则编译器将覆盖类A的display()（因为成员函数覆盖）