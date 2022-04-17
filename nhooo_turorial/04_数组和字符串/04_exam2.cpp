// cin() 和 scanf() 相似，都认为空格是个终止符
// 所以为了读取一行，用cin.get(str, 100)  或者 getline(cin, str)

#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "输入一个字符串: ";
  cin.get(str, 100);

  cout << "您输入了: " << str << endl;
  return 0;
}
