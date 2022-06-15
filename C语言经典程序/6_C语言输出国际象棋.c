#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
	SetConsoleOutputCP(437);	//设置控制台的输出代码页
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if((i+j)%2==0)
				printf("%c%c",219);	//一个
			else
				printf("  ");	//三个空格
		}
		printf("\n");
	}
	
	return 0;
}
