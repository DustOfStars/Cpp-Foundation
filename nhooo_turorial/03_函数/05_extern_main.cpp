#include <iostream>

int count;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}

// 联合编译
// g++ 05_extern_main.cpp 05_extern_support.cpp -o 05_extern.o