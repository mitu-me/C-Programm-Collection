#include <stdio.h>
#include <unistd.h>
int main()
{
    /**
     * @brief 这里并不会首先输出hello,然后停5s后再输出world。
     * 而是5s后两个字符串在5s后一起输出。
     * 但是在hello,\n换行后就可以正常运行了,原因如下:
     * printf()函数在执行结束后并没有把数据直接展示在显示器上，
     * 而是放进了缓冲区，当遇到\n换行时才将缓冲区中的内容输出到显示器上
     * 
     */
    printf("Hello,\n");   //printf("Hello,\n");
    sleep(5);   //程序休眠5s
    printf("world\n");  


    return 0;
}
