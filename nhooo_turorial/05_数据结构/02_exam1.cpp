// 结构体作为参数传递给函数

#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayData(Person);

int main()
{
    Person p;

    cout << "姓名: ";
    cin.get(p.name, 50);
    cout << "年龄: ";
    cin >> p.age;
    cout << "工资: ";
    cin >> p.salary;

    displayData(p);

    return 0;
}

void displayData(Person p)
{
    cout << "输入的姓名: " << p.name << endl;
    cout << "输入的年龄: " << p.age << endl;
    cout << "输入的工资: " << p.salary << endl;
}
