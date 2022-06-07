#include <stdio.h>
/**
 * @brief C语言字符串输入
 * 
 * @return int 
 */
int main()
{
    //1. gets()输入
    // char str1[30];
    // gets(str1);
    // puts(str1);

    //2. scanf();这里省略

    /**
     * @brief gets()和scanf()比较:
     * gets()和scanf()都是有缓冲区的，每当按下回车键就刷新缓冲区
     * 不同点：
     * 1. scanf()读取字符串以空格为分隔，遇到空格就认为当前字符串结束了，
     *    所以无法读取含有空格的字符串。
     * 2. gets()认为空格也是字符串的一部分，只有回车时才认为字符串输入结束，
     *    所以，不管输入多少个空格，只要不按下回车键，对于gets()来讲就
     *    是一个字符串，如下所示：
     */

    // char str1[30];
    // scanf("%s",str1);   //输入:hello world
    // puts(str1);         //输出:hello

    char str2[30];      //输入:hello world where are you ?
    gets(str2);         //输出:hello world where are you ?
    puts(str2);

    return 0;
}