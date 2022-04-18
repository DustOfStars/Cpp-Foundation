# enum枚举
> 枚举是用户定义的数据类型，由**整数常量**组成。可以使用关键字enum，定义枚举。

栗子：

`enum season { spring, summer, autumn, winter };`
+ 默认情况下spring为0，summer为1，依此类推。可以在声明期间更改枚举元素的默认值（如有必要的话）。
比如：
```cpp
enum season 
{   spring = 0, 
    summer = 4, 
    autumn = 8,
    winter = 12
};
```

## 1. 枚举的声明和创建
创建枚举类型时，只会创建蓝图。
```cpp
enum boolean { false, true };

// 创建枚举类型
enum boolean check;


// 或者
enum boolean 
{ 
   false, true
} check;
```

栗子1：
```cpp
#include <iostream>
using namespace std;

enum week
{
    周日,
    周一,
    周二,
    周三,
    周四,
    周五,
    周六
};

int main()
{
    week today;
    today = 周二;
    cout << "星期几?" << today + 1;
    return 0;
}
```

栗子2：

更改枚举的默认值：
```cpp
#include <iostream>
using namespace std;

enum seasons
{
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

int main()
{

    seasons s;

    s = summer;
    cout << "Summer = " << s << endl;

    return 0;
}
```

## 2. 使用枚举的好处和原因
栗子3：
```cpp
#include <iostream>
using namespace std;

enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main()
{
    card = club;
    cout << "enum变量的大小 " << sizeof(card) << " bytes.";
    return 0;
}
// enum变量的大小 4 bytes
```

+ 可以看到，enum只会是一个int的大小！
+ 所以enum成为使用flag时的一个很好的选择。
+ 当然可以使用struct完成相同的任务。但是，**使用枚举可以提高效率和灵活性**。


## 3. 使用enum
### 3.1 作为flag使用
栗子4：
```cpp
enum designFlags {
    ITALICS = 1,
    BOLD = 2,
    UNDERLINE = 4
} button;
```

注意： 在上面的伪代码中，所有的积分常数都是2的幂是有原因的。
> 由于积分常数是2的幂，所以可以同时组合两个或多个标志，使用按位或`|`操作符进行重叠。这**允许您同时选择两个或多个标志**!

栗子5：
```cpp
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
```