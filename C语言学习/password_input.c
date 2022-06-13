#include <stdio.h>

#define PASSWORD_LENGTH 20

/**
 * @brief C语言模拟密码输入
 * 
 * @return int 
 */
int main()
{
    char password[PASSWORD_LENGTH];
    printf("请输入密码: ");

    int i=0;
    while(i<PASSWORD_LENGTH)
    {
        char ch=getch();
        if(ch=='\r')    //如果是换行,直接跳出循环
        {
            printf("\n");
            break;
        } else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || ch>='1' && ch<='2')
        {
            password[i]=ch;
            printf("*");
            i++;
        }
    }

    printf("\n");
    puts(password);


    return 0;
}