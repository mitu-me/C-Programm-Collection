#include <stdio.h>
#include <string.h>

/**
 * 字符串指针
 * C语言有两种表示字符串的方法，一种是字符数组，另一种是字符串常量。
 * 它们在内存中的存储位置不同，使得字符数组可以读取和修改，而字符串常量只能读取不能修改。
 */
int main()
{
    char str[]="Hello,World!";
    int len=strlen(str);
    printf("%s\n",str);
    printf("=========\n");

    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    printf("==========\n");

    char* pointer=str;
    for(int i=0;i<len;i++)
    {
        printf("%c",*(pointer+i));
    }
    printf("\n");
    printf("==========\n");

    for(int i=0;i<len;i++)
    {
        printf("%c",pointer[i]);
    }
    printf("\n");
    printf("==========\n");

    for(int i=0;i<len;i++)
    {
        printf("%c",*(str+i));
    }
    printf("\n");
    printf("==========\n");

    return 0;
}
