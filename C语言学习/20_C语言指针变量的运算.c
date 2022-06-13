#include <stdio.h>

/**
 * 指针变量保存的是地址，而地址本质上是一个整数，
 * 所以指针变量可以进行部分运算，例如加法、减法、比较等。
 * 需要说明的是，不能对指针变量进行乘法、除法、取余等其他运算，
 * 除了会发生语法错误，也没有实际的含义
 */
int main()
{

    int a=10;
    int* pa=&a;
    int* paa=&a;

    printf("最初的地址值为:\n");
    printf("&a=%#x\tpa=%#x\tppa=%#x",&a,pa,paa);
    printf("\n");
    printf("进行加法运算后:\n");
    a++;
    printf("&a=%#x\tpa=%#x\tppa=%#x",&a,pa,paa);
    printf("\n");
    printf("a=%d\tpa=%d\tpaa=%d\n",a,pa,*paa);

    if(pa==paa)
    {
        printf("相等\n");
    }


    return 0;
}
