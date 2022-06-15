#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main()
{
	printf("请输入月数:");
	int month=0;
	scanf("%d",&month);
	printf("%d月后共有%d只兔子\n",month,fib(month));
	
	return 0;
}

int fib(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	
	else
	{
		return n+fib(n-1)+fib(n-2);
	}
}
