#include <stdio.h>

// typedef的用法：C语言允许为一个数据类型起一个新的别名，就像给人起“绰号”一样。
// 使用关键字 typedef 可以为类型起一个新的别名。


// typedef 和 #define 的区别:
// typedef 在表现上有时候类似于 #define，但它和宏替换之间存在一个关键性的区别。
// 正确思考这个问题的方法就是把 typedef 看成一种彻底的“封装”类型，
// 声明之后不能再往里面增加别的东西。

typedef int INT;
typedef char* string;
typedef struct stu
{
    char* name;
    int age;
}STU;

int main()
{
    string name="mitu-me";
    INT age=22;
    STU student;
    student.name=name;
    student.age=age;

    printf("name:%s\tage=%d\n",name,age);


    return 0;
}
