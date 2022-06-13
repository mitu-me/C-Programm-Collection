#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int a=rand()%51+15; //13~65的随机数;注意rand()%a生成的随机数范围为[0,a)
    printf("%d\n",a);

    return 0;
}
