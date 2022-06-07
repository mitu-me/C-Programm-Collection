#include <stdio.h>
#include <conio.h>

/**
 * @brief C语言输入单个字符
 * 
 * @return int 
 */
int main()
{
    //1. getchar() = scanf("%d",&c);
    // char c = getchar();
    // printf("%c\n",c);

    //2. getche();它没有缓冲区,输入一个字符后会立即读取，
    // 不同等待用户按下回车键
    // 该函数只适用于windows平台，Linux和Mac平台没有该头文件
    // char ch=getche();
    // printf("%c\n",ch);

    //3. getch()和getche()的方法一样
    // 同样该函数只适用于windows平台，Linux和Mac平台没有该头文件
    char ch=getch();
    printf("%c\n",ch);
}
