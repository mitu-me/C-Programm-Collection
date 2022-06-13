#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 系统宏定义,它们在各个编译器下都可以使用
 * __LINE__：表示当前源代码的行号；
 * __FILE__：表示当前源文件的名称；
 * __DATE__：表示当前的编译日期；
 * __TIME__：表示当前的编译时间；
 * __STDC__：当要求程序严格遵循ANSI C标准时该标识被赋值为1；
 * 
 * @return int 
 */
int main()
{
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__FILE__);
    printf("%d\n",__LINE__);
    printf("%d\n",__STDC__);

    return 0;
}