// 使用C++字符串读取单词

#include <iostream>
using namespace std;

int main()
{
  char str[100];

  cout << "输入字符串: ";
  cin >> str;
  cout << "您输入了: " << str << endl;

  cout << "\n输入另一个字符串: ";
  cin >> str;
  cout << "您输入了: " << str << endl;

  char str1[100] = "abc";
  cout << str1[2] << endl;
  cout << (int)str1[3] << endl;
  cout << (int)str1[4] << endl;

  return 0;
}
