#include <stdio.h>

int main()
{
    int a = 10;
    int b = a++;      //先使用后自加
    printf("%d\n",b);
    printf("%d\n",a);
    printf("===========\n");
    int c = 15;
    int d = ++c;
    printf("%d\n",c);   //先自加后使用
    printf("%d\n",d);
    return 0;
}