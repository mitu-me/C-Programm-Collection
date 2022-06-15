#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//判断101-200之间有多少个素数，并输出所有素数。

int main()
{
	for(int i=101;i<=200;i++)
	{
		int k=sqrt(i);
		if(i%2==k && k<i)
		{	
			printf("%d\n",i);		
		}
	}
	
	return 0;
}
