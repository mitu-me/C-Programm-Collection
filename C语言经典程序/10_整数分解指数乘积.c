#include <stdio.h>

//正整数分解成质因数
/**
 * @brief 对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成
 * 1. 如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
 * 2. 如果n>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n,重复执行第一步。
 * 3. 如果n不能被k整除，则用k+1作为k的值,重复执行第一步。
 * 
 * @return 
 **/
int main()
{
	int n=0;
	printf("Enter the n:");
	scanf("%d",&n);
	
	for(int i=2;i<=n;i++)
	{
		while(n!=i){
			if(n%i==0)	//余数等于0，已经被除尽
			{
				printf("%d*",i);
				n=n/i;
			} else {
				break;
			}
		}
	}
	printf("%d\n",n);
	
	
	return 0;
}
