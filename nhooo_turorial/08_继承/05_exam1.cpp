/* C ++程序演示友元函数的工作。*/
#include <iostream>
using namespace std;

class Distance {
  private:
    int meter;

  public:
    Distance() : meter(0) {}
    //友元函数
    friend int addFive(Distance);
};

// 友元函数的定义
int addFive(Distance d) {
    //从非成员函数访问私有数据
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "距离: " << addFive(D);
    return 0;
}