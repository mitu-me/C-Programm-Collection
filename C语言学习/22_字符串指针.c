#include <stdio.h>
#include <string.h>

/**
 * �ַ���ָ��
 * C���������ֱ�ʾ�ַ����ķ�����һ�����ַ����飬��һ�����ַ���������
 * �������ڴ��еĴ洢λ�ò�ͬ��ʹ���ַ�������Զ�ȡ���޸ģ����ַ�������ֻ�ܶ�ȡ�����޸ġ�
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
