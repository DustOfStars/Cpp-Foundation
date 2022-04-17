// 将字符串传递给函数

#include <iostream>

using namespace std;

void display(char *);
void display(string);

int main()
{
    string str1;
    char str[100];

    cout << "输入字符串: ";
    getline(cin, str1);

    cout << "输入另一个字符串: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    return 0;
}

void display(char s[]) { cout << "输入的字符数组为: " << s << endl; }

void display(string s) { cout << "输入的字符串是: " << s << endl; }
