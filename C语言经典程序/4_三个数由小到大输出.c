#include <stdio.h>
#include <stdlib.h>

/**
 * 输入三个整数x,y,z，请把这三个数由小到大输出。
 **/

#define max(a,b) a>b?a:b
#define min(a,b) a<=b?a:b


int main()
{
	int a=0,b=0,c=0;
	int high=0,middle=0,low=0;
	printf("请输入a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	high=max(max(a,b),c);
	middle=min(high,c);
	low=min(min(a,b),c);
	
	printf("a b c由大到小排序为:%d %d %d\n",high,middle,low);
	return 0;
}
