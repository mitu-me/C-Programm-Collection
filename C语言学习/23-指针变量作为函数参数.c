#include <stdio.h>


/**
 * C语言指针变量作为函数参数
 */
void swap(int* t1,int* t2);

int main()
{
    int a=10,b=20;
    printf("交换前:a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("交换后:a=%d\tb=%d\n",a,b);
}

void swap(int* t1,int* t2)
{
    int temp=*t1;
    *t1=*t2;
    *t2=temp;
}


