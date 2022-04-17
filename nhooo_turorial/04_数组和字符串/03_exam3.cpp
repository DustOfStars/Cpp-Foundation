#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// 生成并返回随机数
int *getRandom() {
  static int r[8];

  // 设置种子
  srand((unsigned)time(NULL));
  for (int i = 0; i < 8; ++i) {
    r[i] = rand();
    cout << r[i] << endl;
  }
  return r;
}

int main() {
  // 指向int的指针
  int *p;
  p = getRandom();
  for (int i = 0; i < 8; ++i) {
    cout << "*(p + " << i << ") : ";
    cout << *(p + i) << endl;
  }
  return 0;
}
