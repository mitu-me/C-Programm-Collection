#include <stdio.h>

/**
 * @brief 输入两个正整数m和n，利用辗除法求其最大公约数和最小公倍数。
 * 
 * 
 * @return 
 **/
int main()
{
	int m,n;	//m>n
	printf("请输入两个数:");
	scanf("%d %d",&m,&n);
	
	if(m<n){
		int t=m;
		m=n;
		n=t;
	}
	int a1=m,a2=n;
	
	while(n!=0)
	{
		int temp=m%n;
		m=n;
		n=temp;
	}
	
	printf("公因数为:%d\n",m);
	printf("公倍数为:%d\n",a1*a2/m);
	
	return 0;
}
