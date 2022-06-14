#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 * 
 * 
 * @return 
 **/
int main()
{
	for(long int i=0;i<=100000;i++)
	{
		long int x=sqrt(i+100);
		long int y=sqrt(i+268);
		if(x*x==(i+100) && y*y==(i+268))
		{
			printf("%ld\n",i);
		}
	}
	
	return 0;
}
