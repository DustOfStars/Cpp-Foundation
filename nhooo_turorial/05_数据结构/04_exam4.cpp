#include <iostream>
using namespace std;

enum designFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = (BOLD | UNDERLINE);

    //    00000001
    //  | 00000100
    //  ___________
    //    00000101

    cout << myDesign;

    if (myDesign & ITALICS)
    {
        // 斜体代码
    }

    return 0;
}
// 当输出为5时，始终知道会同时使用粗体（bold） 和 （underline） 下划线。