#include <stdio.h>
#include <string.h>

/**
 * @brief C语言string.h文件下的所有函数如链接:
 * <a href="http://www.cplusplus.com/reference/cstring/"></a>
 * 
 * 下面介绍一些常见函数的用法
 * 
 * @return int 
 */

int main()
{
    //字符串连接 strcat(str1,str2);//连接后的新字符串由str1表示
    //注意str2要足够长,防止溢出

    //字符串复制 strcpy(str1,ctr2);//字符串复制，
    //也即将字符串从一个地方复制到另外一个地方

    //strcmp(str1,str2);字符串比较,注意比较的是ASCII码
    // 返回值大于0:str1>str2
    // 返回值等于0:str1=str2
    // 返回值小于0:str1<str2

    //int len=strlen(str);//返回字符串的长度
    return 0;
}