#include <stdio.h>
#include <stdlib.h>

/**
 * 数据在内存中的地址也称为指针，
 * 如果一个变量存储了一份数据的指针，我们就称它为指针变量
 * 这样的一份数据可以是数组、字符串、函数，也可以是另外的一个普通变量或指针变量。
 *
 * 注意：定义指针变量时必须带*，给指针变量赋值时不能带*
 *
 * 关于*和&:
 * 假设有一个 int 类型的变量 a，pa 是指向它的指针，那么*&a和&*pa分别是什么意思呢？
 * *&a可以理解为*(&a)，&a表示取变量 a 的地址（等价于 pa），
 * *(&a)表示取这个地址上的数据（等价于 *pa），绕来绕去，又回到了原点，*&a仍然等价于 a。
 * &*pa可以理解为&(*pa)，*pa表示取得 pa 指向的数据（等价于 a），
 * &(*pa)表示数据的地址（等价于 &a），所以&*pa等价于 pa。
 */

 //通过指针交换两个值
 void swap(int* a,int* b);

int main()
{
    int a=100;
    int* pointer_a=&a;
    printf("%#x\t%#x\n",pointer_a,&a);
    printf("通过指针变量获取值\n");
    printf("%d\n",*pointer_a);
    printf("交换值:\n");
    int b=500;
    printf("交换前:a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("交换后:a=%d\tb=%d\n",a,b);
    return 0;

}

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
