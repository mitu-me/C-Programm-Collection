/**
 * 顺序表的基本操作
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct arratyList{
	int* array;		//声明动态数组，用来存储元素
	int length;		//记录当前顺序表的长度
	int size;		//记录顺序表分配的存储容量
}ArratyList;

//初始化
ArratyList init();

//插入元素
ArratyList add(ArratyList list, int elem, int index);

//删除元素
ArratyList delete(ArratyList list, int index);

//展示当前线性表中的元素
void display(ArratyList list);

//查询元素elem在线性表list中的位置
int select(ArratyList list, int elem);

//修改元素elem的值newElem
ArratyList updateByElem(ArratyList list, int oldElem, int newElem);

//修改元素的值(根据索引修改)
ArratyList updateByIndex(ArratyList list, int index, int newElem);

int main()
{
	ArratyList list=init();
	for (int i=1; i<=list.size; i++) {
		list.array[i-1]=i;
		list.length++;
	}
	display(list);
	
	return 0;
}

ArratyList init()
{
	ArratyList list;
	list.array=(int* )malloc(sizeof(int)*SIZE);
	if(!list.array) exit(0);
	
	list.length=0;
	list.size=SIZE;
	return list;
}

ArratyList add(ArratyList list, int elem, int index)
{
	//判断插入的位置是否合法
	if(index>list.length+1 || index<1)
	{
		printf("插入的位置不合法!");
		return list;
	}
	
	//判断空间是否够
	if(list.length>=list.size)
	{
		list.array=(int* )realloc(list.array, (list.size)*sizeof(int));
		if(!list.array)
		{
			printf("数组扩容失败\n");
		}
		list.size+=SIZE;
	}
	
	//插入元素:将要插入位置后面的元素都往后移
	for(int i=list.length-1;i>=index-1;i--) list.array[i]=list.array[i+1];
	
	list.array[index-1]=elem;
	list.length++;
	return list;
}

void display(ArratyList list)
{
	for(int i=0;i<list.length;i++) printf("%d ",list.array[i]);
	printf("\n");
}

ArratyList delete(ArratyList list, int index)
{
	//判断删除的位置是否合法
	if(index>list.length || index<1 )
	{
		printf("删除的位置不合法\n");
		return list;
	}
	
	//删除的时候只需要覆盖即可
	for(int i=index; i< list.length;i++)
		list.array[i-1]=list.array[i];
	list.length--;
	return list;
}

int select(ArratyList list, int elem)
{
	for(int i=0;i<list.length;i++)
	{
		if(list.array[i]==elem) return i+1;
	}
	return -1;
}

ArratyList updateByElem(ArratyList list, int oldElem, int newElem)
{
	for(int i=0;i<list.length;i++)
	{
		if(list.array[i]==oldElem) list.array[i]=newElem;
	}
	return list;
}

ArratyList updateByIndex(ArratyList list, int index, int newElem)
{
	//判断修改位置是否合法
	if(index <1 || index > list.length)
	{
		printf("修改元素的位置不合法\n");
		return list;
	}
	
	list.array[index-1]=newElem;
	return list;
}
