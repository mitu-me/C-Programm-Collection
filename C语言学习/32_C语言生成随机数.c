#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int a=rand()%51+15; //13~65�������;ע��rand()%a���ɵ��������ΧΪ[0,a)
    printf("%d\n",a);

    return 0;
}
