#include <stdio.h>

//定义结构体
struct stu{
    char* name;
    int age;
    double score;
    char* address;
};

//可以在定义结构体的时候同时定义结构体变量
/**
*struct stu{
    char* name;
    int age;
    double score;
    char* address;
}stu1,stu2;

*/


int main()
{
    //定义结构体变量
    struct stu stu1,stu2;
    //结构体赋值
    stu1.name="mitu";
    stu1.age=22;
    stu1.score=99.9;
    stu1.address="陕西省汉中市";

    printf("%s\t%d\t%lf\t%s",stu1.name,stu1.age,stu1.score,stu1.address);


    return 0;
}
