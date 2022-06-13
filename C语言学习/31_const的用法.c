#include <stdio.h>

// 有时候我们希望定义这样一种变量，它的值不能被改变，在整个作用域中都保持固定。
// 我们经常将 const 变量称为常量（Constant）
// 例如，用一个变量来表示班级的最大人数，或者表示缓冲区的大小。为了满足这一要求，
// 可以使用const关键字对变量加以限定：
int main()
{
    const int stuNumMax=100;
    printf("%d\n",stuNumMax++); // error:increment of read-only variable 'stuNumMax'.

    return 0;
}
