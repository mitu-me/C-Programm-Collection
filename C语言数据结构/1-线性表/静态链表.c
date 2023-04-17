/**
 * 静态链表：兼顾了顺序表和链表的优点。使用静态链表存储数据，数据全部存储在数组中(和顺序表一样)
 * ，但存储位置是随机的，数据之间的关系通过“游标”维持(和链表类似)
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum bool{
	true=1, false=0
}bool;

//静态链表结构体定义
typedef struct {
	int data;	//数据域
	int cursor;	//游标：后继元素在数组中的下标
}StaticList;



int main()
{
	
	return 0;
}


