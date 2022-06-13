#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 //比较字符串大小，返回较长的字符串
 char* strlong(char* str1,char* str2);

 int main()
 {
     char* hello="Hello,!";
     char* world="World!mitu-me.";
     printf("较长的字符串为:%s\n",strlong(hello,world));
     return 0;
 }

 char* strlong(char* str1,char* str2)
 {
    return strlen(str1) >= strlen(str2) ? str1 : str2;
 }
