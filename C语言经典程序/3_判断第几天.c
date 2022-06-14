#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define bool int

/**
 * @brief 输入某年某月某日，判断这一天是这一年的第几天？
 * 
 * 
 * @return 
 **/
 
int main()
{
	int year=0,month=0,day=0;
	printf("请输入年月日:");
	scanf("%d %d %d",&year,&month,&day);
	int count=0;
	switch (month) {
		case 1:count=0;break;
		case 2:count=31;break;
		case 3:count=59;break;
		case 4:count=90;break;
		case 5:count=120;break;
		case 6:count=151;break;
		case 7:count=181;break;
		case 8:count=212;break;
		case 9:count=243;break;
		case 10:count=273;break;
		case 11:count=304;break;
		case 12:count=334;break;
		default:break;
	}
	
	count=count+day;
	
	//判断当前奶奶分是否为闰年
	bool isLeapYear=false;
	if(year%400==0 || (year%4==0 && year%100!=0))
	{
		isLeapYear=true;
	}
	
	//判断当前月份是否大于等于2-->+1,且为闰年
	if(month>=2 && isLeapYear==true)
	{
		count=count+1;
	}
	
	printf("%d年%d月%d日共%d天\n",year,month,day,count);
	
	return 0;
}
