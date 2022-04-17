// string对象，没有固定长度，可以扩展

#include <iostream>
// #include <string>
using namespace std;

int main()
{
  string str;
  cout << "输入字符串： ";
  getline(cin, str);
  // getline()函数将输入流作为第一个参数，cin和str作为要存储的行的位置。

  cout << "输入了： " << str << endl;
  return 0;
}
