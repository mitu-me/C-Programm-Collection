#include <stdio.h>


/**
 * C����ָ�������Ϊ��������
 */
void swap(int* t1,int* t2);

int main()
{
    int a=10,b=20;
    printf("����ǰ:a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("������:a=%d\tb=%d\n",a,b);
}

void swap(int* t1,int* t2)
{
    int temp=*t1;
    *t1=*t2;
    *t2=temp;
}


