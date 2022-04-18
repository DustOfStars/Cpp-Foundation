// 函数返回对象

#include <iostream>
using namespace std;

class Complex {
  private:
    int real;
    int imag;

  public:
    Complex() : real(0), imag(0) {}
    void readData() {
        cout << "输入实数和虚数: " << endl;
        cin >> real >> imag;
    }

    Complex addComplexNumbers(Complex comp2) {
        Complex temp;
        temp.real = real + comp2.real;
        temp.imag = imag + comp2.imag;
        return temp;
    }

    void displayData() {
        cout << "Sum = " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.readData();
    c2.readData();

    c3 = c1.addComplexNumbers(c2);

    c3.displayData();
    return 0;
}
