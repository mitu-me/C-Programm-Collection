#include <stdio.h>
#include <stdlib.h>

void getEnv(const char* name);

int main()
{
    getEnv("path");
    return 0;
}

void getEnv(const char* name)
{
    printf("%s\n",system(name));
}