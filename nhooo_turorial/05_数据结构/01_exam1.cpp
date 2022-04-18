// 给struct分配数据，并输出

#include <iostream>
using namespace std;

struct Person
{
    char name[53]; // 这里涉及到结构体对齐！！
    int age;
    float salary;
};

int main()
{
    Person p1;

    cout << sizeof(p1) << endl;
    cout << "输入名字： ";
    cin.get(p1.name, 50);
    //   getline(cin, p1.name);
    cout << "输入年龄： ";
    cin >> p1.age;
    cout << "输入工资： ";
    cin >> p1.salary;

    cout << "姓名：  " << p1.name << endl;
    cout << "年龄：  " << p1.age << endl;
    cout << "工资：  " << p1.salary << endl;
    cout << sizeof(p1) << endl;
    return 0;
}
