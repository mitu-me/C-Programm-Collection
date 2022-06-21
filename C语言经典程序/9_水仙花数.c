#include <stdio.h>
#include <stdlib.h>

/**
 * 打印输出100-999中的所有水仙花数:各位数的立方和等于它本身
 **/

int main()
{
	for(int i=100;i<=999;i++)
	{
		int a=i/100;	//a代表个位
		int b=(i-a*100)/10;	//b代表十位
		int c=i-a*100-b*10;	//c代表百位
		
		if(a*a*a+b*b*b+c*c*c == i)
		{
			printf("%d\n",i);
		}
		
	}	
	return 0;
}
