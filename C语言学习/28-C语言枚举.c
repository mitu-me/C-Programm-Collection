#include <stdio.h>


//C语言枚举都是常量，不能对它们进行赋值

//枚举和宏其实非常类似：宏在预处理阶段将名字替换成对应的值，
//枚举在编译阶段将名字替换成对应的值。我们可以将枚举理解为编译阶段的宏。
//它们不占用数据区（常量区、全局数据区、栈区和堆区）的内存，
//而是直接被编译到命令里面，放到代码区，所以不能用&取得它们的地址!


enum week{Mon=1,Tues=2,Wed=3,Thurs=4,Fri=5,Sat=6,Sun=7};

int main()
{
    enum week day;
    scanf("%d",&day);

    switch(day)
    {
        case 1: puts("Monday"); break;
        case 2: puts("Tuesday"); break;
        case 3: puts("Wednesday"); break;
        case 4: puts("Thursday"); break;
        case 5: puts("Friday"); break;
        case 6: puts("Saturday"); break;
        case 7: puts("Sunday"); break;
        default: puts("Error!");
    }

    return 0;
}
