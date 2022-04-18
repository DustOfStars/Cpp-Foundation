// 指针是如何工作的

#include <iostream>
using namespace std;

int main() {
    int *pc, c;
    c = 5;

    cout << "c 的地址是: " << &c << endl;
    cout << "c 的值是: " << c << endl;

    pc = &c;
    cout << "地址指针pc指向的的地址是: " << pc << endl;
    cout << "地址指针pc持有的值是:  " << *pc << endl;

    c = 11;
    cout << "地址指针pc指向的的地址是: " << pc << endl;
    cout << "地址指针pc持有的值是: " << *pc << endl;

    *pc = 2;
    cout << "c 的地址是: " << &c << endl;
    cout << "c 的值是: " << c << endl;

    return 0;
}
