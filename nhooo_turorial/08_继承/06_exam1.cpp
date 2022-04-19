#include <iostream>
using namespace std;

class Weapon {
  public:
    void loadFeatures() { cout << "载入武器特性。\n"; }
};

class Bomb : public Weapon {
  public:
    void loadFeatures() { cout << "装载刀的特性。\n"; }
};

class Gun : public Weapon {
  public:
    void loadFeatures() { cout << "装载枪的特性\n"; }
};

int main() {
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}