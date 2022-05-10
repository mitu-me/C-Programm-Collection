#include <stdio.h>

/**
 * @brief C语言共有如下的数据类型:
* 		1. 字符型	char			1
* 		2. 短整型	short			2
* 		3. 整型		int				4
* 		4. 长整型	long			4
* 		5. 单精度浮点型	float		4
* 		6. 双精度浮点型	double		4
* 		7. 无类型	void			
 * 
 * @return 
 */
int main()
{
	char a='A';
	short b=1;
	int c=21;
	long d=22;
	float e=1.2;
	double f=1.3;
	
	printf("字符型的大小为:%d\n",sizeof(a));
	printf("短整型的大小为:%d\n",sizeof(b));
	printf("整形的大小为:%d\n",sizeof(c));
	printf("长整型的大小为:%d\n",sizeof(d));
	printf("单精度浮点型的大小为:%d\n",sizeof(e));
	printf("双精度浮点型大小为:%d\n",sizeof(f));
	
	return 0;
}
