#include <stdio.h>
//不同的平台引入不同的头文件
#if _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

int main()
{
    #if _WIN32
    Sleep(5000);
    #elif __linux__
    sleep(5);
    #endif
    puts("Hello,World!");
    return 0;
}

