#include <stdio.h>
#include <string.h>

/**
 * @brief C语言数组溢出指的是赋予数组的元素个数超过数组长度
 * 如果是字符串溢出，就会产生很奇怪的问题。
 * 
 * @return int 
 */
int main()
{
    int arr[3]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    char str[5]="Hello,World!";
    puts(str);
    
    return 0;
}