#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 //�Ƚ��ַ�����С�����ؽϳ����ַ���
 char* strlong(char* str1,char* str2);

 int main()
 {
     char* hello="Hello,!";
     char* world="World!mitu-me.";
     printf("�ϳ����ַ���Ϊ:%s\n",strlong(hello,world));
     return 0;
 }

 char* strlong(char* str1,char* str2)
 {
    return strlen(str1) >= strlen(str2) ? str1 : str2;
 }
