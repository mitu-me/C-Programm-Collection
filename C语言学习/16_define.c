#include <stdio.h>

#define MAX(a,b) (a>b)?a:b
#define SQRT(elem) elem*elem

int main()
{

    printf("%d\n",MAX(12,23));
    printf("%d\n",SQRT(12));
    return 0;
}