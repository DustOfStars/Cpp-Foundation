#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal() { cout << "哺乳动物可以直接出生。" << endl; }
};

class WingedAnimal {
  public:
    WingedAnimal() { cout << "有翼的动物能拍动翅膀。" << endl; }
};

class Bat : public Mammal, public WingedAnimal {};

int main() {
    Bat b1;
    return 0;
}