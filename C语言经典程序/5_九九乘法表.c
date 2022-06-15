#include <stdio.h>
#include <stdlib.h>

int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",j,i,i*j);	//%-3d:左对齐占3位
		}
		printf("\n");
	}
	
	return 0;
}
