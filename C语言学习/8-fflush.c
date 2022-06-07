#include <stdio.h>
#include <unistd.h>
/**
 * @brief linux平台下清空输出缓存:fflush(stdout)
 * 如下代码，如果再两个printf()函数之间不加fflush(stdout),
 * 则5s后两个函数会一起显示在屏幕上,如果中间加了fflush(stdout),
 * 则首先会打印hello,world，然后等待5s后会再次打印mitu(●'◡'●)
 * 
 * @return int 
 */
int main()
{   
    printf("Hello,World!");
    fflush(stdout);
    sleep(5);
    printf("mitu(●'◡'●)");
    return 0;
}